#include<stdio.h>   //finding a number if its in a fibonnaci series or not
int main()
{
   int i,x,m=0,n=1,s;
   printf("Enter the number:");
   scanf("%d",&x);
        if((x==1)||(x==0))
        {
            printf("The number is  part of a fibonnaci series");
        }
   for(i=2;1;i++)
   {
       s=m+n;
       m=n;
       n=s;
       if(s==x)
       {
           printf("It is part of a fibonnaci series");
            break;
       }
       if(s>x)
       {
           printf("Number not found");
           break;
       }

   }

   return 0;
}
