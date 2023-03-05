struct SimpleSetNode {
    char* value;
    long _hash;
};

struct SimpleSet {
    struct SimpleSetNode **nodes;
    long number_nodes;
    long used_nodes;
};

#define SET_TRUE 0
#define SET_FALSE -1
#define SET_MALLOC_ERROR -2
#define SET_CIRCULAR_ERROR -3
#define SET_OCCUPIED_ERROR -4
#define SET_ALREADY_PRESENT 1

#define SET_RIGHT_GREATER 3
#define SET_LEFT_GREATER 1
#define SET_EQUAL 0
#define SET_UNEQUAL 2

static long hash_func(const char *key);
static int __get_index(struct SimpleSet *set, const char *key, long hash, long *index);
static int __assign_node(struct SimpleSet *set, const char *key, long hash, long index);
static int __set_contains(struct SimpleSet *set, const char *key, long hash);

int set_init_alt(struct SimpleSet *set, long num_els);
char** set_to_array(struct SimpleSet *set);
int set_add(struct SimpleSet *set, const char *key);
