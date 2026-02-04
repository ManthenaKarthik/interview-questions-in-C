#include<stdio.h>
void main()
{
    int size;
    printf("enter the array size: ");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=size-1;i++)
    {
        printf("element of %d is: ",i+1);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (int i=0;i<=size-1;i++)
    {
       sum=sum+a[i];
    }
     printf("sum= %d\n",sum);
    for ( int i=0;i<=size -1;i++)
    {
       if (12%a[i]==0)
      {
          printf("%d\n",a[i]);
      }
    }
}