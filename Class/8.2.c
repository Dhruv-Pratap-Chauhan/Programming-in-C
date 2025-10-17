#include <stdio.h>

int main() {
    int a = 100;
    float b = 200.5;
    char c = 'A';

    int *p_int = &a;
    float *p_float = &b;
    char *p_char = &c;

    printf("Original p_int points to address %p with value %d\n", (void*)p_int, *p_int);
    printf("Original p_float points to address %p with value %.2f\n", (void*)p_float, *p_float);
    printf("Original p_char points to address %p with value %c\n", (void*)p_char, *p_char);

    p_int++;
    p_float++;
    p_char++;

    printf("\nAfter incrementing:\n");
    printf("p_int points to address %p\n", (void*)p_int);
    printf("p_float points to address %p\n", (void*)p_float);
    printf("p_char points to address %p\n", (void*)p_char);

    p_int--;
    p_float--;
    p_char--;

    printf("\nAfter decrementing:\n");
    printf("p_int points back to address %p with value %d\n", (void*)p_int, *p_int);
    printf("p_float points back to address %p with value %.2f\n", (void*)p_float, *p_float);
    printf("p_char points back to address %p with value %c\n", (void*)p_char, *p_char);

    return 0;
}
