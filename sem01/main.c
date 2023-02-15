#include <stdio.h>


void func(){
    printf("skdfj");
}

int main() {
    int var = 10; //4 byte
    short lskdj = 5; // 2 byte
    char symbol = 'k'; // 1 byte
    float number = 3.14;
    printf("Hello,\t World!\n");
    scanf("%d", &var);
    printf("value -> %d 0x%x %d %f %s\n", var, 17, 'h', 3.14, "akhdsgfkjsd2");
    var--;
    printf("%d", var);
    return 0;
}
