#include <stdio.h>
int main(void)
{
    int a,b,choice,result=0;
    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.addition \n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=a+b;
    }
    else if(choice==2)
    {
        result=a-b;
    }
    else if(choice==3)
    {
        result=a*b;
    }
    else if(choice==4)
    {
        result=a/b;
    }
    else
    {
        printf("choose option\n");
    }
printf("result=%d",result);
return 0;
}
