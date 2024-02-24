#include <stdio.h>


int input() {
    int n;
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &n);
    return n;
}


int find_gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}


void output(int a, int b, int gcd) {
    printf("GCD of %d and %d is %d\n", a, b, gcd);
}

int main() {
    int a, b;

    
    a = input();
    b = input();

    
    int gcd = find_gcd(a, b);

    
    output(a, b, gcd);

    return 0;
}
