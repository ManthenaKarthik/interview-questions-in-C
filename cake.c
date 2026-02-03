#include<stdio.h>
void main()
{
    int small,big,goal;
    printf("enter values of small bar,big bar and goal\n");
    scanf("%d%d%d",&small,&big,&goal);
    int req=goal/5;
    if(req<=big)
    {
        int rem=goal-(req*5);
        if(rem<=small)
        {
            printf("%d",rem);
        }
        else
        {
            printf("-1");
        }
    }
    else
    {
    
        int rem1=goal-(big*5);
        if(rem1<=small)
        {
            printf("%d",rem1);
        }
        else
        {
            printf("-1");
        }
    }
}