//declare variables in different code blocks amf test there accessibility witin outside the code blocks

#include <stdio.h>
int main()
{
    int a = 10; 
    printf("Value of a in main block: %d\n", a);

    {
        int b = 20;
        printf("Value of b in inner block: %d\n", b);
        printf("Accessing a from inner block: %d\n", a); 
    }

    return 0;
}