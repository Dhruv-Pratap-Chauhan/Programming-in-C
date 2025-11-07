//Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>
int main() {
    unsigned char a = 0b11001100; 
    unsigned char b = 0b10101010; 

    unsigned char andResult = a & b; 
    unsigned char orResult = a | b;  
    unsigned char notResultA = ~a;   
    unsigned char notResultB = ~b;   

    printf("a:          %08b\n", a);
    printf("b:          %08b\n", b);
    printf("a AND b:    %08b\n", andResult);
    printf("a OR b:     %08b\n", orResult);
    printf("NOT a:      %08b\n", notResultA);
    printf("NOT b:      %08b\n", notResultB);

    return 0;
}