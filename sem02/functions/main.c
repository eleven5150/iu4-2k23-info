#include <stdio.h>
#define PI 3.14159

float calc_circle_area(){
    float radius, area;

    printf("Enter Radius:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    return area;
}

float calc_square_area(){
    int side;
    float area;

    printf("Enter the Length of Side:\n");
    scanf("%d", &side);
    area = (float)(side * side);
    return area;
}

float calc_rectangle_area(){
    int length, breadth;
    float area;

    printf("Enter length of rectangle:\n");
    scanf("%d", &length);
    printf("Enter breadth of rectangle:\n");
    scanf("%d", &breadth);
    area = (float)(length * breadth);
    return area;
}

int main() {
    float circle_area, square_area, rectangle_area;
    circle_area = calc_circle_area();
    square_area = calc_square_area();
    rectangle_area = calc_rectangle_area();

    printf("Circle area -> %.2f\n", circle_area);
    printf("Square area -> %.2f\n", square_area);
    printf("Rectangle area -> %.2f\n", rectangle_area);
    return 0;
}