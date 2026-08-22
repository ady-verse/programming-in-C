#include <stdio.h>

int main()
{
    int a, b, c, h, g, i;

    printf("Enter two numbers to add, subtract, multiply, divide: ");
    scanf("%d %d", &a, &b);

    c = a + b;
    h = a-b;
    g = a*b;
    i = a/b;

    printf("Sum = %d\n", c);
    printf("difference = %d\n", h);
    printf("multiplication = %d\n", g);
    printf("division = %d\n", i);

    return 0;
}