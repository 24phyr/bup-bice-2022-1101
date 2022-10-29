#include<stdio.h>
int fact(int a);

int main()
{
    int n ,  r, NCR;
    printf("Enter n & r:");
    scanf("%d %d" , &n , &r);

    NCR=fact(n)/(fact(r)*fact(n-r));
    printf("%d" , NCR);
}

int fact(int a)
{
    int result=1 ,i;
    for(i=1 ; i<=a ; i++)
    {
        result = result*i;
    }
    return result;
}
