#include <stdio.h>

// Global variable
int g = 20;

int main()
{
    // Local variable
    int g = 10;
    { // Note the scope
        extern int g; // Uses the global now
        printf("value of global variable g = %d\n", g);
    }
    printf("value of local variable g = %d\n", g);

    return 0;
}

// NOTE: That's bad style, don't do that, program is to demonstrate the concept.