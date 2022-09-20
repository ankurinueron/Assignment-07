#include<stdio.h>       //Prime numbers under 100
int main()
{
int x,z,flag=0;
for(x=1;x<=100;x++)
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
