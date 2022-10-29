#include <stdio.h>
#include <math.h>                                       // Used for the pow function in line 13
#define Pi 3.1416                                       // Pi is a constant. So we used #define to declare it

int main()
{
    int Radius, R2;
    float Area;

    printf("Enter the Radius value of the circle:");
    scanf("%d", &Radius);

    R2=pow(Radius,2);

    Area=Pi*R2;                                         // Formula of finding the area of a circle

    printf("Area of the Circle:""%.2f", Area);

    return 0;
}
