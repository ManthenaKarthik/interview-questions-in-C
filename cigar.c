#include<stdio.h>
int main()
{
    int cigar;
    int weekend;
    printf("enter the value of cigar\n");
    scanf("%d",&cigar);
    printf("enter 1 if weekend\t 0 if not weekend\n");
    scanf("%d",&weekend);
    if(weekend==1)
    {
        if(cigar>=40)
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
        if(cigar>=40&&cigar<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}s