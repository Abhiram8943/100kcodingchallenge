#include<stdio.h>
int main(void) 
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("negative number");
    }
    else
    {
        printf("positive number");
    }
}