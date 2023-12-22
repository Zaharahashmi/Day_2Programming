#include <stdio.h>
#include <math.h>
int main() {
    char shape;
    float size;
    printf("Shape: ");
    scanf("%c", &shape);
    printf("Size: ");
    scanf("%f", &size);
    if (shape == 'S') {
        float area_square = size * size;
        printf("Area of Square = %.2f\n", area_square);
    } 
    else if (shape == 'C') {
        float area_circle = M_PI * size * size;
        printf("Area of Circle = %.2f\n", area_circle);
    } 
    else {
        printf("Invalid shape. Please enter 'S' for Square or 'C' for Circle.\n");
    }
    return 0;
}