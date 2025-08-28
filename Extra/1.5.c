//Wap to take a number input as input and find whether the number is a Palindrome or not.

#include <stdio.h>

int main()
{
    int n, o, r =0, re;

    printf("Enter an integer: ");
    scanf("%d", &n);

    o = n;
    while (n !=0)
    {
        re = n %10;
        r = r *10 + re;
        n = n /10;
    }
    if (o == r)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);
return 0;
} 