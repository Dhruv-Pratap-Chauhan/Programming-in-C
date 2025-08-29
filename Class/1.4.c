#include <stdio.h>
int main()
{
    int n1;
    int n2;

    printf("Master please enter first number: ");
    scanf("%d", &n1);

    printf("Master please enter second number: ");
    scanf("%d", &n2);

    printf("The sum of %d and %d is %d\n", n1, n2, n1 + n2);
    return 0;
}