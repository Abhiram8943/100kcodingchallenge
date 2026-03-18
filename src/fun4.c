#include<stdio.h>
#include<stdlib.h>
int sum();
int main(void)
{
    int k;
    k=sum();
    printf("the sum is %d",k);
    return 0;
}

int sum()
{
    int a,b,c;
    printf("enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}