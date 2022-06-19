#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, area;

    printf("Enter the first vertice of the triangle: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the second vertice of the triangle: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the third vertice of the triangle: ");
    scanf("%lf %lf", &x3, &y3);

    area = 0.5 * fabs((x1 * (y2 - y3)) - (x2 * (y1 - y3)) + (x3 * (y1 - y2)));
    printf("The area of the tiangle is: %.2lf", area);

    return 0;
}

// output:
// Enter the first vertice of the triangle: 3 4
// Enter the second vertice of the triangle: 4 7
// Enter the third vertice of the triangle: 6 -3
// The area of the tiangle is: 8.00