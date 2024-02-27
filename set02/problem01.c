#include <stdio.h>


void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

void find_area(float base, float height, float *area) {
    *area = (base * height) / 2.0;
}


void output(float base, float height, float area) {
    printf("Base of the triangle: %.2f\n", base);
    printf("Height of the triangle: %.2f\n", height);
    printf("Area of the triangle: %.2f\n", area);
}

int main() {
    float base, height, area;

    
    input(&base, &height);

    
    find_area(base, height, &area);


    output(base, height, area);

    return 0;
}