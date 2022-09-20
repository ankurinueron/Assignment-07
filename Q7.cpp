#include<stdio.h>       //Prime numbers b/w two given numbers
int main()
{
int x,z,a,b,flag=0;
printf("Enter two nos :");
scanf("%d%d",&a,&b);
for(x=a;x<=b;x++)
{
    flag=0;
for(z=2;z<=x/2;z++)
{
if(x%z==0)
{
   flag=1;
   break;
}
}
if(flag==0)
        printf("%d ",x);
}


return 0;
}
