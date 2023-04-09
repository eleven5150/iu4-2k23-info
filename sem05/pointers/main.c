#include <stdio.h>

int main() {

    int a = 10;
    int *ptr;

    ptr = &a;

    printf("The value of a is: %d \n", a);
    printf("The address of a is: %p \n", &a);
    printf("The value of ptr is: %p \n", ptr);
    printf("The value of *ptr is: %d \n", *ptr);

    int **dptr;

    dptr = &ptr;
    printf("The value of dptr is: %p \n", dptr);
    printf("The value of *dptr is: %p \n", *dptr);
    printf("The value of **dptr is: %d \n", **dptr);

    int ***tptr;

    tptr = &dptr;
    printf("The value of tptr is: %p \n", tptr);
    printf("The value of *tptr is: %p \n", *tptr);
    printf("The value of **tptr is: %p \n", **tptr);
    printf("The value of ***tptr is: %d \n", ***tptr);

    return 0;

}