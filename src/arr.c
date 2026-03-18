#include<stdio.h>
int main (void)
{    //taking input from user and printing it back to user
    int i,num;//declaring variables
    printf("enter the size of the array: ");
    scanf("%d",&num);//scanned array size into num
    int a[num];//array size is num//declare array
    printf("enter the value of numbers: ");//ask user for the input
    for(i=0;i<num;i++)//input should be taken for num-1 times
    {
        scanf("%d",&a[i]);//stores each input into array where i is array position
    }
    printf("the array is: ");
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);//prints all array values
    }
return 0;
}