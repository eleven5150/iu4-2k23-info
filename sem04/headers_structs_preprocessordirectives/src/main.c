#include <string.h>
#include "util.h"

int main() {
    struct Student students[MAX_SIZE];

    // Initialize student data
    students[0].id = 1;
    students[0].age = 20;
    strcpy(students[0].name, "John");

    students[1].id = 2;
    students[1].age = 21;
    strcpy(students[1].name, "Jane");

    // Print student info
    for (int i = 0; i < 2; i++) {
        print_student_info(students[i]);
    }

    return 0;
}