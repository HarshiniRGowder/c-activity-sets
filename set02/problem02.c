#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isScalene);

int main()
{
    int side1, side2, side3;

    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    int isScalene = check_scalene(side1, side2, side3);

    output(side1, side2, side3, isScalene);

    return 0;
}

int input_side()
{
    int side;
    printf("Enter the length of a side of the triangle: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c)
{
    if (a != b && b != c && a != c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(int a, int b, int c, int isScalene)
{
    if (isScalene)
    {
        printf("The triangle is scalene.\n");
    }
    else
    {
        printf("The triangle is not scalene.\n");
    }
}