#include<stdio.h>

int main()
{
    int i,j;
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
