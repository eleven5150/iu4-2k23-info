#include <stdio.h>

int main()
{
    int a = 5324, b = 45;
    char x = 'a';

    double div;

    div = (double) a / b;

    x = x + 3;  // x is letter 'a' + 3 positions to the right (letter 'd')

    printf("The result of implicit typecasting is %c\n\n", x);

    printf("The result of explicit typecasting is %f\n", div);    // float - as it should be
    printf("The result of explicit typecasting is %hi\n", div);   // cast to short signed
    printf("The result of explicit typecasting is %hu\n", div);   // cast to short unsigned
    printf("The result of explicit typecasting is %c\n", div);   // cast to char
    printf("The result of explicit typecasting is %d", div);   // cast to integer

    return 0;
}