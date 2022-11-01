#include<stdio.h>
#include<math.h>
int main()
{
    int n,t=0,r,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        t++;
    }
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,t);
        temp=temp/10;
        t--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}