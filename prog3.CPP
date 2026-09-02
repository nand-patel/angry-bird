#include <stdio.h>
#include <conio.h>

int main() {
    float gross_salary, net_salary, allowance, deduction;
    clrscr();
    printf("Enter gross salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary > 10000) {
        allowance = 0.10 * gross_salary;
        deduction = 0.03 * gross_salary;
    } else if (gross_salary > 5000) {
        allowance = 0.07 * gross_salary;
        deduction = 0.02 * gross_salary;
    } else {
        allowance = 0;
        deduction = 0;
    }

    net_salary = gross_salary + allowance - deduction;

    printf("Allowance = %.2f\n", allowance);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net_salary);

    getch();
    return 0;
}