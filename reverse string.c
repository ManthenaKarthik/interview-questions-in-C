#include <stdio.h>
#include<string.h>
void main()
{
char user_name[10];
printf("enter the name :\n");
scanf("%s",user_name);
printf("the name of the user is : %s\n",user_name);
int size=strlen(user_name);
for(int i=size-1;i>=0;i--)
{
printf("%c",user_name[i]);
}
}