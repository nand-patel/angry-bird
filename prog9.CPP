#include <stdio.h>
#include <conio.h>

void main() {
    float r, d;
    clrscr();
    printf("Enter amount in rupees: ");
    scanf("%f", &r);
    d = r / 48;
    printf("Rs. %.2f = $ %.2f\n", r, d);
    getch();
}