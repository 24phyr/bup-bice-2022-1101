#include<stdio.h>
int square(int a);

int main()
{
    int num;

    printf("Enter any number:");
    scanf("%d" , &num);

    printf("Square of the number is %d" , square(num));

    return 0;
}

int square(int a)
{
    int sqr;
    sqr=a*a;
    return sqr;
}
