#include<stdio.h>

int main()
{
    int n, i;
    float sum, avg;

    printf("Enter the size of array a:");
    scanf("%d" , &n);

    int a[n];

    printf("Enter the elements of a:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &a[i]);
    }

    printf("Average of the array is:");
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }

    for(i=0;i<n;i++)
    {
        avg=(sum/n);
    }
    printf("%.4f" , avg);

    return 0;
}
