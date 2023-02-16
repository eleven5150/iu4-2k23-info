#include <stdio.h>

int main() {
    int num;

    printf("Enter any number:\n");
    scanf("%f", &num);

    char var = (char)num;

    printf("Number -> %d\n", var);


    if (num > 0) {
        printf("Enter number is positive");
    } else if (num < 0) {
        printf("Enter number is negative");
    } else {
        printf("Enter number is zero");
    }

    return 0;
}