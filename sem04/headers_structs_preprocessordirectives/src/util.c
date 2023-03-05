#include "util.h"
#include <stdio.h>

void print_student_info(struct Student student) {
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("\n");
}