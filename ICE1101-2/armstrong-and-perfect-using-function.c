#include <stdio.h>
#include <math.h>

int armstrong(int num);
int perfect(int num);
int main()
{
 int num;
 printf("Enter any number: ");
 scanf("%d", &num);
 if(armstrong(num))
 {
 printf("%d is Armstrong number.\n", num);
 }
 else
 {
 printf("%d is not Armstrong number.\n", num);
 }
 if(perfect(num))
 {
 printf("%d is Perfect number.\n", num);
 }
 else
 {
 printf("%d is not Perfect number.\n", num);
 }
 return 0;
}

int armstrong(int num)
{
 int lastDigit, sum, originalNum, digits;
 sum = 0;
 originalNum = num;
 digits = (int) log10(num) + 1;
 while(num > 0)
 {
 lastDigit = num % 10;
 sum = sum + round(pow(lastDigit, digits));
 num = num / 10;
 }
 return (originalNum == sum);
}


int perfect(int num)
{
 int i, sum, n;
 sum = 0;
 n = num;
 for(i=1; i<n; i++)
 {
 if(n%i == 0)
 {
 sum += i;
 }
 }
 return (num == sum);
}
