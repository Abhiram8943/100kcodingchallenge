#include<stdio.h>
int main (void)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("hi\n");
        if(i==5)
        {
            continue;
        }
        printf("hello\n");
    }
    printf("finished");
}
