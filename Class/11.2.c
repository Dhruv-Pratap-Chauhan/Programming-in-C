//Write a program to apply left shift and right shift operator.

#include <stdio.h>
int main() {
    unsigned char a;
    int shift;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &a);
    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    unsigned char left_shift_result = a << shift;
    unsigned char right_shift_result = a >> shift;

    printf("Left shift of %u by %d positions: %u\n", a, shift, left_shift_result);
    printf("Right shift of %u by %d positions: %u\n", a, shift, right_shift_result);

    return 0;
}