#include<stdio.h>

int main()
{
    int i,j,x;

    printf("Enter the Value of i:");
    scanf("%d",&i);

    printf("Enter the Value of j:");
    scanf("%d",&j);

    x=i;
    i=j;
    j=x;

    printf("Swapped Value of i:%d\n", i);
    printf("Swapped Value of j:%d", j);

    return 0;
}
