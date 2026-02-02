#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c values\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==2&&b==2&&c==2)
    {
        printf("10");
    }
    else if(b!=a&&c!=a)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
}