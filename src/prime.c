#include<stdio.h>
int main(void)

{
    int num,i;
    int flag=0;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num<=1)
    {
        flag=0;
    }
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("the number %d is not prime",num);
    }
    else
    {
        printf("the number %d is prime",num);
    }
}
       