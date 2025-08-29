#include <stdio.h>
int main()
{
    printf("Please enter the sides of a triangle[Sepeerate by spaces]: ");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c || a + c > b || b + c > a)
        printf("Yes, the triangle exists.\n");
    else
        printf("No, the triangle does not exist.\n");

        if (a == b && b == c)
            printf("The triangle is equilateral.\n");
        else if (a == b || a == c || b == c)
            printf("The triangle is isosceles.\n");
        else
            printf("The triangle is scalene.\n"); 

            if 
            (a*a + b*b == c*c || a*a + c*c == b*b ||
            b*b + c*c == a*a)

                printf("The triangle is a right triangle.\n");

    return 0;
}