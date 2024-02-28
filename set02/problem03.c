#include <stdio.h>
#include <math.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n)
{
    if (n <= 1)
    {
        return 1; 
        
    }
    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                return 1; 
            }
        }
        return 0;
    }
}

void output(int n, int result)
{
    if (result == 0)
    {
        return 0;
       
    }
    else if (n == 2)
    {
        return 0; 
       
    }
    else if (n % 2 == 0)
    {
        printf("\n%d is not composite.", n);
    }
    else
    {
        printf("\n%d is composite.", n);
    }
}
int main()
{
    int n = input_number();
    int result = is_composite(n);
    output(n, result);
    return 0;
}
