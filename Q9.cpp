#include<stdio.h>       //Armstrong number or not
#include<math.h>
int main()
{
int a,b,rem,num,sum=0,count=0;
printf("Enter a number : ");
scanf("%d",&num);
a=num;
while(a!=0)
{
    a=a/10;
    count++;
}
b=num;
while(b!=0)
{
    rem=b%10;
    b=b/10;
    sum+=pow(rem,count);
}
if(sum==num)
    printf("%d is a Armstrong number",num);
else
    printf("%d number is not a Armstrong number",num);
return 0;

}
