#include <stdio.h>
#include "arithmetic.h"

int main() {
    int a = 12, b = 4;

    printf("Add: %d\n", add(a, b));
    printf("Subtract: %d\n", subtract(a, b));
    printf("Multiply: %d\n", multiply(a, b));
    printf("Divide: %.2f\n", divide(a, b));

    return 0;
}
