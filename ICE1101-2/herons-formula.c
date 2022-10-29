#include<stdio.h>
#include<math.h>                                // Used for sqrt function in line 20

int main()
{
    int a, b, c;
    float s, A;

    printf("Enter the value of a: ");
    scanf("%d", &a);                            // Input the value of a

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    s=(a+b+c)/2;                                // Semi-Perimeter

    A=sqrt(s*(s-a)*(s-b)*(s-c));                // Heron's Formula

    printf("Area of the triangle: %.2f", A);    // .number determines the size of Fractional Part

    return 0;
}
