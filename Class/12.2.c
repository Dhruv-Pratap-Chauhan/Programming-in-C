//write a a program to define a function in directives

#include <stdio.h>
#define SQUARE(x) ((x) * (x))
int main() {
    int num = 5;
    int result = SQUARE(num);
    printf("The square of %d is %d\n", num, result);
    return 0;
}