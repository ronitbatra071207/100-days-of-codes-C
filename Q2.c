// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d, %d", &a, &b);

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    printf("sum = %d\n", c);
    printf("difference = %d\n", d);
    printf("multiplication = %d\n", e);
    printf("division = %d\n", f);
    printf("quotient = %d\n", g);
}