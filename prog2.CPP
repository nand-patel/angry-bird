#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c, largest, smallest;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    getch();
    return 0;
}