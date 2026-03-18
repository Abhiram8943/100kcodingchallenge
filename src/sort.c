#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int size,i,j,choice,temp;
    printf("enter the size of the array: \n");
    scanf("%d",&size);
    int a[size];
    printf("enter the values of the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }/*till here we get the array and its values*/
    /*next we have to selection sort*/
    printf("1.sort\n2.print array\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(i=0;i<size-1;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    printf("the sorted array is:\n");
    for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        
    }
}