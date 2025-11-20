//Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>
int main() {
    unsigned char a, b;
    printf("Enter two numbers (0-255): ");
    scanf("%hhu %hhu", &a, &b);

    unsigned char and_result = a & b;
    unsigned char or_result = a | b;
    unsigned char not_a = ~a;   

    printf("Bitwise AND of %u and %u: %u\n", a, b, and_result);
    printf("Bitwise OR of %u and %u: %u\n", a, b, or_result);
    printf("Bitwise NOT of %u: %u\n", a, not_a);
    return 0;
}