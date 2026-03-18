#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,array[3][3];
    printf("enter the values of array: ");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        scanf("%d",&array[i][j]);
    }
   }
printf("array is:\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        printf("[%d] ",array[i][j]);/*here js loop goes for 3 time then exits the loop so there we can put a new line before i++ happens*/
    }
    printf("\n");
   }
return 0;
}