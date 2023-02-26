// C program to illustrate strings and arguments

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    // print string
    printf("%s\n", argv[1]);

    int length = 0;
    length = strlen(argv[1]);

    // displaying the length of string
    printf("Length of string str is %d", length);

    return 0;
}