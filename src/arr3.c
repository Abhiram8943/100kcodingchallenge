#include<stdio.h>
int main(void)
{
    int size,i,value=0,flag=0;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the values of the array: ");
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value u want to find position: ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(value==a[i])
        {
            flag=1;/*flag is added  bcz when no value 
            match then else cant be written inside the 
            loop cause for each time it will print not 
            found soo put both outside the loop using 
            flag as a medium to check the value match*/
            break;
        }
        

    }
    if(flag==1)
    {
        printf("position of the value is %d",i+1);
    }
    else
    {
        printf("not found/invalid entry");
    }
return 0;
}