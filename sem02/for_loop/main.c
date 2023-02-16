#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a positive number\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; ++i) {
        sum += i;
        printf("Current sum -> %d\n", sum);
    }

    printf("Sum -> %d", sum);
    return 0;
}

