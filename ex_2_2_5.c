#include <stdio.h>
#include <math.h>

int main()
{
    int n, square;
    printf("Enter number: ");
    scanf("%d", &n);
    square = sqrt(n);
    printf("integer close to squre root is: %d \n", square);

    return 0;
}

// output:
// Enter number: 33
// integer close to squre root is: 5