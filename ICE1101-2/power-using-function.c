#include<stdio.h>
int power(int a , int b);

int main()
{
    int x, y, pow;
    printf("Enter the base:");
    scanf("%d" , &x);

    printf("Enter the power:");
    scanf("%d" , &y);

    pow=power(x,y);
    printf("%d" , pow);
    return 0;
}

int power(int a , int b)
{
    int result=1 ,i;
    for(i=1; i<=b ;i++)
    {
        result *= a;
    }
    return result;
}
