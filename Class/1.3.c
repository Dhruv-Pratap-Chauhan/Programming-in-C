#include <stdio.h>
int main()
{
    int age;
    char name[30];

    printf("Master, Kindly Share Your Name: ");
    scanf(" %[^\n]", name);

    printf("May I Know Your Age, Master: ");
    scanf("%d", &age);

    printf("Welcome, Master %s!\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}
