#include<stdio.h>
int main()
{
int i,m,n,hcf=1,min;
printf("Enter two nos:");
scanf("%d%d",&m,&n);
min=m>n?m:n;
for(i=1;i<=min;i++)
{
    if((m%i==0)&&(n%i==0))
    {
        hcf=i;
    }
}
printf("HCF is : %d",hcf);
return 0;

}
