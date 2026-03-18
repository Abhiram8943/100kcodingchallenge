#include<stdio.h>
int main(void) 
{
    int num1,num2;
    printf("enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greatest",num1);
    }
    else
    {
        printf("%d is greatest",num2);
    }
}