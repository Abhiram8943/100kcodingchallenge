#include <stdio.h>
int main(void)
{
    int i,limit,sum=0;
    printf("enter the size of the array: ");//user enter size
    scanf("%d",&limit);//take size as input into num variable
    int a[limit];//declare the array
    printf("enter the values of array: ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);//scan the inputs into array
    }
    //now we have the array and need to find the sum
    //declatre a variable called sum
    for(i=0;i<limit;i++)
    {
        sum=(sum+a[i]);//loop add each array number and next number which continues upto last arrayth position which is num-1
    }
    printf("the sum of the array is %d: ",sum);
    return 0;
}