#include<stdio.h>
void main()\
{
    int uid=5371;
    int upass=9647;
    int id;
    int pass;
    printf("enter id\n");
    scanf("%d",&id);
    printf("enter pass\n");
    scanf("%d",&pass);
    if(uid==id)
    {
        if(upass==pass)
        {
            printf("login success");
        }
        else
        {
            printf("incorrect pass");
        }
    }
    else 
    {
        printf("incorrect uid ");
    }
}