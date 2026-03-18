#include <stdio.h>
int main(void)
{
    int a;
    int b;
    printf("enter a num1: ");
    scanf("%d",&a);
    printf("enter a num1: ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" the swapped numbers num1=%d and num2=%d",a,b);

}