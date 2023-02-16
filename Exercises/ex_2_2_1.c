#include <stdio.h>
#include <math.h>

int main()
{
    double d, x1, y1, x2, y2;
    printf("Enter first co-ordinate: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter second co-ordinate: ");
    scanf("%lf %lf", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("distance between two co-ordinate is : %.4lf\n", d);

    return 0;
}