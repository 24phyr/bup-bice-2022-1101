#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the Value of i:");
    scanf("%d", &i);

    printf("Enter the Value of j:");
    scanf("%d", &j);

    printf("Press 1 to get swapped value of i\nPress 2 to get swapped value of j\n");
    scanf("%d",&n);

    if(n==1)
    {
        i=j;
        printf("Swapped Value of i:""%d", i);

        return 0;
    }
    else
    {
        j=i;
        printf("Swapped Value of j:""%d", j);

        return 0;
    }
}
