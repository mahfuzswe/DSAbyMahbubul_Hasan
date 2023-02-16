#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is grater\n");
    }
    else if (b > a && b > c)
    {
        printf("b is grater\n");
    }
    else
        printf("c is grater\n");

    return 0;
}