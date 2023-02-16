#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x, y, z, A, B, C;
    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    x = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
    A = acos(x);
    A = A * (180 / 3.1416);

    y = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * c * a);
    B = acos(y);
    B = B * (180 / 3.1416);

    z = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
    C = acos(z);
    C = C * (180 / 3.1416);

    printf("\nThe angles of triangle are: %.2lf\t%.2lf\t %.2lf", A, B, C);

    return 0;
}