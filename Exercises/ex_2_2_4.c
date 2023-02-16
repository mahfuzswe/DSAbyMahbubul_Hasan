#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    printf("Enter the radius of circle: ");
    scanf("%lf", &r);

    printf("Perimeter of the circle is : %.2lf", 2 * 3.14 * r);

    return 0;
}

// output:
// Enter the radius of circle: 6.5
// Perimeter of the circle is : 40.82