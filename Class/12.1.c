//write a program to define some constant varuiable in preprocessor

#include <stdio.h>
#define PI 3.14159
#define MAX_SIZE 100    
#define GREETING "Hello, World!"
int main() {
    printf("Value of PI: %.5f\n", PI);
    printf("Maximum Size: %d\n", MAX_SIZE);
    printf("Greeting Message: %s\n", GREETING);
    return 0;
}
    