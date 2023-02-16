//check co-ordinate point in which quadrant

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter co-ordinate point(x,y): ");
    scanf("%d %d", &x, &y);

    if (x >= 0 && y >= 0)
    {
        printf("First quadrant\n");
    }
    else if (x < 0 && y >= 0)
    {
        printf("Second quadrant\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Third quadrant\n");
    }
    else
        printf("Fourth quadrant\n");

    return 0;
}