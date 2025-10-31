#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'Z';

    int *p_int = &a;
    float *p_float = &b;
    char *p_char = &c;

    printf("Value of a = %d, Value pointed by p_int = %d\n", a, *p_int);
    printf("Value of b = %.2f, Value pointed by p_float = %.2f\n", b, *p_float);
    printf("Value of c = %c, Value pointed by p_char = %c\n", c, *p_char);
    printf("Address stored in p_int = %p\n", (void*)p_int);
    printf("Address stored in p_float = %p\n", (void*)p_float);
    printf("Address stored in p_char = %p\n", (void*)p_char);

    return 0;
}
