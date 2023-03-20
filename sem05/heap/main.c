#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 0, i = 0, n, *marks; // this marks pointer hold the base address of  the block created
    int ans;
    marks = (int *) malloc(sizeof(int)); // dynamically allocate memory using malloc

    // check if the memory is successfully allocated by
    // malloc or not?
    if (marks == NULL) {
        printf("memory cannot be allocated");
    } else {
        // memory has successfully allocated
        printf("Memory has been successfully allocated by using malloc\n");
        printf("\nMarks = %pc\n", marks);
        do {
            printf("\nEnter marks\n");
            scanf("%d", &marks[index]); // Get the marks
            printf("Would you like to add more(1/0): ");
            scanf("%d", &ans);

            if (ans == 1) {
                index++;
                marks = (int *) realloc(marks, (index + 1) * sizeof(int)); // Dynamically reallocate
                if (marks == NULL) {
                    printf("Memory cannot be allocated");
                } else {
                    printf("Memory has been successfully reallocated using realloc\n");
                    printf("\nBase address of marks are: %pc", marks);
                }
            }
        } while (ans == 1);
        // print the marks of the students
        for (i = 0; i <= index; i++) {
            printf("Marks of student %d are: %d\n", i,
                   marks[i]);
        }
        free(marks);
    }
    return 0;
}