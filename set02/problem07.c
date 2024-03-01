#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main() {
    Triangle tri = input_triangle();
    find_area(&tri);
    output(tri);
    return 0;
}

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base and altitude of the triangle: ");
    scanf("%f %f", &t.base, &t.altitude);
    return t;
}

void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t) {
    printf("Triangle with base %.2f and altitude %.2f has an area of %.2f\n", t.base, t.altitude, t.area);
}
