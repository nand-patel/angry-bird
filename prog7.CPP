#include <stdio.h>
#include <conio.h>

void main() {
    int t, h, m;
    clrscr();
    printf("Enter total minutes: ");
    scanf("%d", &t);
    h = t / 60;
    m = t % 60;
    printf("%d min = %d hour %d min\n", t, h, m);
    getch();
}