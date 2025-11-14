//write a program to define multiple macros to form arithmetic functions

#include <stdio.h>
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((b) != 0 ? ((a) / (b)) : 0) 
int main() {
    int x = 10, y = 5;
    printf("Addition: %d + %d = %d\n", x, y, ADD(x, y));
    printf("Subtraction: %d - %d = %d\n", x, y, SUBTRACT(x, y));
    printf("Multiplication: %d * %d = %d\n", x, y, MULTIPLY(x, y));
    printf("Division: %d / %d = %d\n", x, y, DIVIDE(x, y));
    return 0;
}