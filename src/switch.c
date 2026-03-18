#include <stdio.h>
int main(void)
{
    int choice;
    printf("choose from menu\n1.porotta\n2.biriyani\n3.fried rice\n4.mandhi");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        {
            printf("selected porotta");
        }
        break;
        case 2: 
        {
            printf("selected biriyani");
        }
        break;
        case 3:
        {
            printf("selected fried rice");
        }
        break;
        case 4:
        {
            printf("selected mandhi");
        }
        break;
    default:
        printf("fool");


    }
}  