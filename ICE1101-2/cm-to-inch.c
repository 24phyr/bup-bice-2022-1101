#include<stdio.h>
#define CM_per_INCH 0.393701                                                            // 1 cm = 0.393701 inch

int main()
{
    int n;
    float cm , inch;

    printf("For CM to Inch conversion Press 1\nFor Inch to CM conversion Press 2\n");
    scanf("%d",&n);

    if(n==1)                                                                            // Inputing 1 satisfies the condition of if
    {
        printf("Enter the Value in Centimeter:");
        scanf("%f", &cm);
        inch = cm * CM_per_INCH;
        printf("Value in Inch:" "%f",inch);
        return 0;
    }
    else
    {
        printf("Enter the Value in Inch:");
        scanf("%f", &inch);
        cm = inch / CM_per_INCH;
        printf("Value in Centimeter:" "%f",cm);
        return 0;
    }
}
