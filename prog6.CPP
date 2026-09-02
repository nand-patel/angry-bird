#include <stdio.h>
#include <conio.h>

int main() {
    float m1, m2, m3, total, average;
    clrscr();
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result = Fail (scored below 35 in one or more subjects)\n");
    } else if (average >= 70) {
        printf("Result = Distinction\n");
    } else if (average >= 60) {
        printf("Result = First Class\n");
    } else if (average >= 50) {
        printf("Result = Second Class\n");
    } else if (average >= 35) {
        printf("Result = Third Class\n");
    } else {
        printf("Result = Fail\n");
    }

    getch();
    return 0;
}