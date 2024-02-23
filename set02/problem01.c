#include <stdio.h>

// Function to input the base and height of the triangle
void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

// Function to calculate the area of the triangle
void find_area(float base, float height, float *area) {
    *area = (base * height) / 2.0;
}

// Function to output the base, height, and area of the triangle
void output(float base, float height, float area) {
    printf("Base of the triangle: %.2f\n", base);
    printf("Height of the triangle: %.2f\n", height);
    printf("Area of the triangle: %.2f\n", area);
}

int main() {
    float base, height, area;

    // Input the base and height of the triangle
    input(&base, &height);

    // Calculate the area of the triangle
    find_area(base, height, &area);

    // Output the base, height, and area of the triangle
    output(base, height, area);

    return 0;
}
