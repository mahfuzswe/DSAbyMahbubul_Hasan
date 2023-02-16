#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is grater than %d\n", a, b);
    }
    else
        printf("%d is less than %d\n", a, b);

    return 0;
}