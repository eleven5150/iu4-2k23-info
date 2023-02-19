#include <stdio.h>

int main() {
    int num;

    printf("Enter any number:\n");
    scanf("%d", &num);

    if (num > 0) {
        printf("Enter number is positive");
    } else if (num < 0) {
        printf("Enter number is negative");
    } else {
        printf("Enter number is zero");
    }

    return 0;
}