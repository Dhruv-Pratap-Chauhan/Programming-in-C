#include <stdio.h>
int main()
{
    int num =1;
    int rows = 3;
    for (int i =1; i<= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf (" ");   
       }
            for (int k=1 ; k <= i; k++)
            {
                printf ("%d ", num++);
            
            }
            printf ("\n");
        }
            return 0;
        
    }    