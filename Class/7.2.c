#include <stdio.h>

typedef struct {
    float basic_pay;
    float da;
} SalaryDetails;

int main() {
    int n, i;
    char name[50];
    SalaryDetails salary;
    float gross_salary;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", name);
 
        printf("Enter basic pay of %s: ", name);
        scanf("%f", &salary.basic_pay);

        salary.da = 0.52f * salary.basic_pay;

        gross_salary = salary.basic_pay + salary.da;

        printf("Employee Name: %s\n", name);
        printf("Gross Salary: %.2f\n", gross_salary);
    }

    return 0;
}
