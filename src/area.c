#include <stdio.h>
int main(void)
{
    int l;
    int w;
    printf("enter the length of the rectangele: ");
    scanf("%d",&l);
    printf("enter the width of the rectangle: ");
    scanf("%d",&w);
    int area=l*w;
    printf("the area of the rectangle is %d", area);
}