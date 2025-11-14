//write a program to create a static library for performing arithmetic functions

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b); 

int add(int a, int b) {
    return a + b;
}   
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int main() {
    int x = 20, y = 4;
    printf("Addition: %d + %d = %d\n", x, y, add(x, y));
    printf("Subtraction: %d - %d = %d\n", x, y, subtract(x, y));
    printf("Multiplication: %d * %d = %d\n", x, y, multiply(x, y));
    printf("Division: %d / %d = %.2f\n", x, y, divide(x, y));   
    return 0;
}   