#include<stdio.h>
int main(void)
{
    int num,i,j;
    printf("enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
