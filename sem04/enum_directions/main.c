#include <stdio.h>
#include<stdlib.h>

// Prints the direction, corresponding to input
enum directions {
    NORTH = 1,
    EAST,
    WEST,
    SOUTH
};

int main(int argc, char **argv) {
    enum directions cur_dir = strtol(argv[1], NULL, 10);
    printf("\n\n");
    switch (cur_dir) {
        case NORTH:
            printf("We are headed towards North.");
            break;
        case EAST:
            printf("We are headed towards East.");
            break;
        case WEST:
            printf("We are headed towards West.");
            break;
        case SOUTH:
            printf("We are headed towards South.");
            break;
        default:
            printf("Error!");
            break;
    }
    printf("\n\n");
    return EXIT_SUCCESS;
}
