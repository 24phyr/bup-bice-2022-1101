#include<stdio.h>
#include<math.h>

int main()

{
    int a , b, formula;

    printf("enter the value of a:");
    scanf("%d", &a);

    printf("enter the value of b:");
    scanf("%d", &b);

    formula = pow(a+b, 2);
    printf("(a+b)^2 = %d", formula);

    return 0;
}
