//Write a program to apply left shift and right shift operator.

#include <stdio.h>
int main() {
    unsigned char num = 0b00001111; 

    unsigned char leftShift = num << 2;  
    unsigned char rightShift = num >> 2; 

    printf("Original number:      %08b\n", num);
    printf("Left Shift by 2:     %08b\n", leftShift);
    printf("Right Shift by 2:    %08b\n", rightShift);

    return 0;
}
