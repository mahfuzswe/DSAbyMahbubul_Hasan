// You will be given an array of integers, write a recursive solution to print it in reverse order.
// Input:
// 5
// 69 87 45 21 47
// Output:
// 47 21 45 87 69

#include <stdio.h>

void print_rev(int i, int n, int *a)
{
    if(i<n)
    {
        print_rev(i+1, n, a);
        printf("%d ", a[i]);
    }
}

int main()
{
    int i, n, a[10];
    scanf("%d", &n);

    for(i=0; i<n; i++) scanf("%d", &a[i]);
    
    print_rev(0, n, a);
    printf("\n");
    return 0;
}
