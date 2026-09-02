#include <stdio.h>
#include <conio.h>

void main() {
    float d, r, p;
    clrscr();
    printf("Enter amount in dollars: ");
    scanf("%f", &d);
    r = d * 48;
    p = r / 70;
    printf("$ %.2f = Rs. %.2f = Pound %.2f\n", d, r, p);
    getch();
}