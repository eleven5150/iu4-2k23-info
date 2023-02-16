#include <stdio.h>

int main() {
    long long number;

    printf("Enter a number\n");
    scanf("%lld", &number);

    int count = 0;
    while (number != 0){
        number /= 10;
        ++count;
        printf("Current count -> %d\n", count);
    }

    printf("Number of digits -> %d\n", count);
    return 0;
}