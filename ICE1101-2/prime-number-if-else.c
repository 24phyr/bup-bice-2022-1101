#include<stdio.h>

int main()
{
    int n, count=0,i;

    printf("Enter any Positive number: ");
    scanf("%d" , &n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}
