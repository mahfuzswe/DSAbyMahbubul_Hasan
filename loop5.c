//1-2+3-4+5...nth term

//if N is even S=-1/2 * N
//if N is odd S=-1/2 *(N-1)+N = 1/2 * (N+1)

#include<stdio.h>

int main()
{
    int n;
    float sum;
    printf("Enter numbers of terms: ");
    scanf("%d",&n);

    if(n%2==0){
        sum=-0.5*n;
        printf("Summation is : %.2f",sum);
    }
    else{
        sum=0.5*(n+1);
        printf("Summation is : %.2f",sum);
    }
    return 0;
}
