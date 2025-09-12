#include <stdio.h>
int main ()
{
    int sp = 4;
    for (int i = 0; i <= 4; i++)
    {
        for (int k = 1; k <= sp; k++)
        {
            printf(" ");
        }
        int d = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", d);
            d = (d*(i-j))/(j+1);
        }
        printf("\n");
        sp--;
    }
    return 0;
}