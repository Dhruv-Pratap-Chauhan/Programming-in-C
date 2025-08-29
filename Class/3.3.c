#include <stdio.h>
int main()
{
    float s1, s2, x1, x2, x3,y1 ,y2 ,y3;
    printf("Please enter the coordinates of 1st point (x1, y1): ");
    scanf("%f" "%f", &x1, &y1);
    printf("Please enter the coordinates of 2nd point (x2, y2): ");     
    scanf("%f" "%f", &x2, &y2);
    printf("Please enter the coordinates of 3rd point (x3, y3): ");
    scanf("%f" "%f", &x3, &y3);

    s1 = y2 - y1 / x2 - x1;
    s2 = y3 - y2 / x3 - x2;
    if (s1 == s2)
        printf("The three points are collinear.\n");
    else
        printf("The three points are not collinear.\n");
    return 0;
}

