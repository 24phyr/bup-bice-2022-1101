#include<stdio.h>

int main()
{
    float sum=0,j,k,n;

    printf("Number of series: ");
    scanf("%f" , &n);

    printf("\nThe Series:\n");
    for(j=1; j<=n; j++)
    {
        printf("%f\n" , k=1/j);
        sum+=k;
    }

    printf("\nSum: %f\n" , sum);

    return 0;
}
