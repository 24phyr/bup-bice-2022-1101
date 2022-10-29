#include<stdio.h>

int main()
{
    int a[5] , b[5] , i , temp;
    printf("Enter the elements of Array a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d" , &a[i]);
    }

    for(i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("Elements of Array b:");
    for(i=0;i<5;i++)
    {
        printf("%d " , b[i]);
    }
    return 0;
}
