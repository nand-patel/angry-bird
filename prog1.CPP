#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest number = %d\n", a);
        printf("Smallest number = %d\n", b);
    } else {
        printf("Largest number = %d\n", b);
        printf("Smallest number = %d\n", a);
    }

    getch();
    return 0;
}