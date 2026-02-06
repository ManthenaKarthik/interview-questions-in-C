#include<stdio.h>
#include<conio.h>
int main() 
{
int i, n, flag=0;
printf("enter n value");
scanf("%d", &n) ;
for(i=2;i<=n/2;i++) 
{
if(n%i==0)
{
printf("number is not prime");
flag=1;
break;
}
}
if(flag==0) 
printf("number is prime") ;
getch() ;
}