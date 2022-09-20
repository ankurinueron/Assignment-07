#include<stdio.h>   //first N numbers of a fibonnaci series
int main()
{
   int i,x,m=0,n=1,s;
   printf("Enter the number for finding its fibonnaci value :");
   scanf("%d",&x);
   printf("%d %d",m,n);
   for(i=2;i<x;i++)
   {
       s=m+n;
       printf(" %d",s);
       m=n;
       n=s;
   }
   return 0;
}
