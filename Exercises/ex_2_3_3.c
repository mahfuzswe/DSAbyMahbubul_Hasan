#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Shorted in ascending order: \n");
    if (x <= y && y <= z)
    {
        printf("%d %d %d", x, y, z);
    }
    else if (x <= z && z <= y)
    {
        printf("%d %d %d", x, z, y);
    }
    else if (y <= x && x <= z)
    {
        printf("%d %d %d", y, x, z);
    }
    else if (y <= z && z <= x)
    {
        printf("%d %d %d", y, z, x);
    }
    else if (z <= x && x <= y)
    {
        printf("%d %d %d", z, x, y);
    }
    else
        printf("%d %d %d", z, y, x);

    return 0;
}