#include<stdio.h>
int even(int a);

int main()
{
    int num;

    printf("Enter any number:");
    scanf("%d" , &num);

    if(even(num))
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}

int even(int a)
{
    int x;
    x=a%2==0;
    return x;
}
