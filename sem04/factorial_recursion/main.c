#include<stdio.h>
#include<stdlib.h>

// declaring the function
int fact(int);

int main(int argc, char **argv) {
    int f;
    long input_num = strtol(argv[1], NULL, 10);
    f = fact(input_num);
    printf("\n\nFactorial of %d is %d\n\n", input_num, f);
    return EXIT_SUCCESS;
}

//recursive factorial computation
int fact(int aj) {
    if (aj == 1 || aj == 0)
        return 1;
    else
        return (aj * fact(aj - 1));
}
