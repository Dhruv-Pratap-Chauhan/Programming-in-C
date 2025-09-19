
#include <stdio.h>
int main ()
{
const int maxval = 16000, limit = 20;
for (int num = 1; num <= maxval; num ++)
{ 
    int found_pair = 0, a1 = 0, b1 = 0, a2 =0, b2=0, ramanujan = 0;
    for (int a = 1; a <= limit; a ++)
    {
     if ramanujan_found == 1)
     break;
    }
    for (int b = a +1 ; b <= limit; b ++)
    {
        int sum_of_cubes = a*a*a + b*b*b;
        if (sum_of_cubes == num) 
        {
            found_pair ++;
            if (found_pair == 1)
            {
                a1 = a; b1 = b;
                else if (found_pair == 2)
                {
                    a2 = a; b2 = b;
                    ramanujan = 1;
                    break;
                }
                printf("Ramanujan number found: %d\n", num);
                printf("First pair: %d^3 + %d^3 = %d\n", a1, b1, num);
                printf("Next pair: %d^3 + %d^3 + %d/n", a2, b2, num)

                return 0;
            }

        }
    }