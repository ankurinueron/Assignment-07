#include<stdio.h>       //Next Prime numbers of a given number
int main()
{
int x,z,a,flag=0;
printf("Enter the number :");
scanf("%d",&a);
for(x=a;1;x++)
{
    flag=0;
for(z=2;z<=x/2;z++)
{
if(x%z==0)
{
   flag=1;
}
}
if(flag==0)
{
        printf("%d ",x);
        break;
}
}
return 0;
}
