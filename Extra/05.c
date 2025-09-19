#include <stdio.h>
int main()
{
    double population = 100000;
    int years = 10;
    double rate = 0.1; 
    for (int i = 1; i <= years; i++)
    {
        population = population + (population * rate);

        printf("Year %d: Population = %.0f\n", i, population);  
        return 0;   
}
}