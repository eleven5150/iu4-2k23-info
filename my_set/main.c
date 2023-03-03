#include <stdio.h>
#include "set.h"

#define KEY_LEN 25

void initialize_set(struct SimpleSet *set, int elements) {
    int i;
    for (i = 0; i < elements; i+=1) {
        char key[KEY_LEN] = {0};
        printf("Enter set element\n");
        scanf(" %c", key);
        set_add(set, key);
    }
}

int main() {
    struct SimpleSet A, B;

    set_init_alt(&A, 5);
    initialize_set(&A, 5);

    char** keys = set_to_array(&A);

    int i;
    for (i = 0; i < 5; ++i) {
        printf("%d \t%s\n", i, keys[i]);
    }

    return 0;
}
