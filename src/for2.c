#include<stdio.h>
int main(void)
{
    int num,i,sum;
   printf("enter a number");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
    sum=sum+i;
   }
   printf("sum is %d",sum);
   return 0;

}