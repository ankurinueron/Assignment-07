#include<stdio.h>   //fibonnaci series Nth term
int main()
{
   int i,x,m=0,n=1,s;
   printf("Enter the number for finding its fibonnaci value :");
   scanf("%d",&x);
   for(i=2;i<x;i++)
   {
       s=m+n;
       m=n;
       n=s;
   }
   printf("\nN th term is :%d",s);
   return 0;
}
