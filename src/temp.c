#include <stdio.h>
int main(void)
{
    int t;
    printf("enter the temp in celsius: ");
    scanf("%d",&t);
    int temp= ((t*9)/5)+32;
    printf("the temperature in farenheit is %d", temp);
}