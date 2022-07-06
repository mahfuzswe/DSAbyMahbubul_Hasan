//1+(2+3)+(4+5+6)+...+nth term

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    int sum=(n*(n+1)*((n*n)+n+2))/8;

    printf("sum of the series is: %d\n",sum);
    return 0;
}



