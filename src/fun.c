#include<stdio.h>
#include<stdlib.h>

void sum();
int main(void)
{
    sum();
    printf("\n");
    sum();
    printf("\n");
    sum();
    printf("\n");
    return 0;
}

void sum()
{
    int num1,num2,sum;
    printf("enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("the sum is:%d",sum);
}
