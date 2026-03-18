#include<stdio.h>
#include<stdlib.h>

void sum(int,int);
int main(void)
{
    int a,b;
    printf("enter the 2 numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}

void sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("sum is %d",sum);
}