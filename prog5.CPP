#include <stdio.h>
#include <conio.h>

int main() {
    float gross_sales, net_sales, discount;
    clrscr();
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    if (gross_sales > 20000) {
        discount = 0.15 * gross_sales;
    } else if (gross_sales > 10000) {
        discount = 0.10 * gross_sales;
    } else {
        discount = 0.05 * gross_sales;
    }

    net_sales = gross_sales - discount;

    printf("Discount = %.2f\n", discount);
    printf("Net Sales = %.2f\n", net_sales);

    getch();
    return 0;
}