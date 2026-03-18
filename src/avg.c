#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter a num1: ");
    scanf("%d",&a);
    printf("enter a num2: ");
    scanf("%d",&b);
    printf("enter a num3: ");
    scanf("%d",&c);
    int avg=(a+b+c)/3;
    printf("average of the numbers are: %d",avg);
}