#include<stdio.h>
#include<math.h>

int main()
{
    int binary , decimal , rem , i=0 , b;

    printf("Enter the Binary number:");
    scanf("%d" , &binary);

    while(binary!=0)
    {
        rem=binary % 10;
        binary /= 10;
        b=pow(2,i);
        decimal += rem*b;
        i++;
    }

    printf("%d" , decimal);

    return 0;
}
