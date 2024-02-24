#include <stdio.h>
#include <stdbool.h>

// Function to input the size of the array
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

// Function to input the elements of the array
void input_array(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to check if a number is composite
bool is_composite(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return true;
        }
    }
    return false;
}

// Function to calculate the sum of composite numbers in the array
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

// Function to output the sum of composite numbers
void output(int sum) {
    printf("Sum of composite numbers: %d\n", sum);
}

int main() {
    int n;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
