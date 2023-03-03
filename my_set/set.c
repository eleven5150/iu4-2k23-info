#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "set.h"

#define MAX_FULLNESS_PERCENT 0.25


int set_init_alt(struct SimpleSet *set, long num_els) {
    set->nodes = (struct SimpleSetNode**) malloc(num_els * sizeof(struct SimpleSetNode*));

    set->number_nodes = num_els;
    long i;
    for (i = 0; i < set->number_nodes; ++i) {
        set->nodes[i] = NULL;
    }
    set->used_nodes = 0;
    return SET_TRUE;
}

int set_add(struct SimpleSet *set, const char *key) {
    long hash = hash_func(key);
    long index;
    if (__set_contains(set, key, hash) == SET_TRUE)
        return SET_ALREADY_PRESENT;

    // add element in
    int res = __get_index(set, key, hash, &index);
    if (res == SET_FALSE) { // this is the first open slot
        __assign_node(set, key, hash, index);
        ++set->used_nodes;
        return SET_TRUE;
    }
    return res;
}

char** set_to_array(struct SimpleSet *set) {
    char** results = (char**)calloc(set->used_nodes + 1, sizeof(char*));
    long i, j = 0;
    size_t len;
    for (i = 0; i < set->number_nodes; ++i) {
        if (set->nodes[i] != NULL) {
            len = strlen(set->nodes[i]->value);
            results[j] = (char*)calloc(len + 1, sizeof(char));
            memcpy(results[j], set->nodes[i]->value, len);
            ++j;
        }
    }
    return results;
}


static long hash_func(const char *key) {
    // FNV-1a hash (http://www.isthe.com/chongo/tech/comp/fnv/)
    size_t i, len = strlen(key);
    long hash = 14695981039346656037ULL; // FNV_OFFSET 64 bit
    for (i = 0; i < len; ++i) {
        hash = hash ^ (unsigned char) key[i];
        hash = hash * 1099511628211ULL; // FNV_PRIME 64 bit
    }
    return hash;
}

static int __set_contains(struct SimpleSet *set, const char *key, long hash) {
    long index;
    return __get_index(set, key, hash, &index);
}

static int __get_index(struct SimpleSet *set, const char *key, long hash, long *index) {
    long i, idx;
    idx = hash % set->number_nodes;
    i = idx;
    size_t len = strlen(key);
    while (1) {
        if (set->nodes[i] == NULL) {
            *index = i;
            return SET_FALSE; // not here OR first open slot
        } else if (hash == set->nodes[i]->_hash && len == strlen(set->nodes[i]->value) && strncmp(key, set->nodes[i]->value, len) == 0) {
            *index = i;
            return SET_TRUE;
        }
        ++i;
        if (i == set->number_nodes)
            i = 0;
        if (i == idx) // this means we went all the way around and the set is full
            return SET_CIRCULAR_ERROR;
    }
}

static int __assign_node(struct SimpleSet *set, const char *key, long hash, long index) {
    size_t len = strlen(key);
    set->nodes[index] = (struct SimpleSetNode*)malloc(sizeof(struct SimpleSetNode));
    set->nodes[index]->value = (char*)calloc(len + 1, sizeof(char));
    memcpy(set->nodes[index]->value, key, len);
    set->nodes[index]->_hash = hash;
    return SET_TRUE;
}
