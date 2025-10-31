//write a function that accepts pointers as parameters . pass variables by refrence using pointers and modify their values within the function.

#include <stdio.h>
void modifyValues(int *p_int, float *p_float, char *p_char) {
    *p_int += 50;        
    *p_float *= 2.0;    
    *p_char += 1;
}
int main() {
    int a = 100;
    float b = 200.5;
    char c = 'A';

    printf("Before modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    modifyValues(&a, &b, &c);

    printf("After modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}