#include <stdio.h>
#include <conio.h>

void main() {
    float d, r;
    clrscr();
    printf("Enter amount in dollars: ");
    scanf("%f", &d);
    r = d * 48;
    printf("$ %.2f = Rs. %.2f\n", d, r);
    getch();
}