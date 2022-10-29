#include<stdio.h>
int addnum(int a , int b);
int subnum(int a , int b);
int multinum(int a , int b);
int divnum(int a , int b);

int main()
{
    int n1 , n2 , sum, sub, multi, div;
    printf("enter the two numbers:\n");
    scanf("%d  %d" , &n1 , &n2);

    sum = addnum(n1 , n2);
    printf("\nsum= %d" , sum);

    sub=subnum(n1 , n2);
    printf("\nsub=%d" , sub);

    multi = multinum(n1 , n2);
    printf("\nmulti= %d" , multi);

    div = divnum(n1 , n2);
    printf("\ndiv= %d" , div);
    return 0;
}

int addnum(int a , int b)
{
    int result;
    result=a+b;
    return result;
}

int subnum(int a , int b)
{
    int result;
    result=a-b;
    return result;
}

int multinum(int a , int b)
{
    int result;
    result=a*b;
    return result;
}

int divnum(int a , int b)
{
    int result;
    result=a/b;
    return result;
}
