#include<stdio.h>       //Armstrong number b/w 1-1000
#include<math.h>
int main()
{
int a,b,rem,sum=0,count=0,i;
    for(int n=1;n<=1000;n++)
    {
        int num = n,rem,sum=0;
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            int digit = (int) log10(num) + 1;
            while(num > 0)
            {
                rem = num % 10;
                sum = sum + pow(rem,digit);
                num = num / 10;
            }

            if (sum == n)
            {
                printf("%d ", n);
            }
        }
    }
    return 0;
}

