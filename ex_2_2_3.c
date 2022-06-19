#include <stdio.h>
#include <math.h>

int main()
{
    double s, a, b, c, area;
    printf("Enter 3 sides of triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area is : %.2lf square unit\n", area);

    return 0;
}

// output:
// Enter 3 sides of triangle: 8 6 7
// Area is : 20.33