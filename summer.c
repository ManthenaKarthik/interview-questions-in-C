#include<stdio.h>
void main()
{
    int temp;
    int summer;
    printf("enter temp\n");
    scanf("%d",&temp);
    printf("enter 1 if summer\t 0 if not summer \n");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(temp<=100&&temp>=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}