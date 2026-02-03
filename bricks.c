#include<stdio.h>
void main()
{
    int small,big,goal;
    printf("enter values of small bricks,big bricks and goal\n");
    scanf("%d%d%d",&small,&big,&goal);
    int req=goal/5;
    if(req<=big)
    {
        int rem=goal-(req*5);
        if(rem<=small)
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
        int rem=goal-(big*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}