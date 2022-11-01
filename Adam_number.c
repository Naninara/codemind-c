#include<stdio.h>
int main()
{
    int n,r,sum=0,temp,a,b,c=0;
    scanf("%d",&n);
    temp=n*n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    a=sum*sum;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(temp==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}