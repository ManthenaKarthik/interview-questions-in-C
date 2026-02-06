#include<stdio.h>
void number(int i)
{
  if(i>10)
  {
   return;
  }
  printf("5*%d=%d\n",i,5*i);
  number(i+1);
}
void main()
{
 number(1);
}