#include <stdio.h>
int main()
{
    int l, b, a;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    a = l * b;
    printf("Area of rectangle is: %d\n", a);

    int p;
    
    p = 2 * (l + b);
    printf("Perimeter of rectangle is: %d\n", p);
    
     return 0;
}