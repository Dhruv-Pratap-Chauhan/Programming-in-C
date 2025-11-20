#include <stdio.h>

int main() {
    int n;
    char name[50];
    float basic, gross;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", name);

        printf("Enter basic pay of %s: ", name);
        scanf("%f", &basic);

        gross = basic + 0.52f * basic;

        printf("Employee Name: %s\n", name);
        printf("Gross Salary: %.2f\n", gross);
    }
    return 0;
}   