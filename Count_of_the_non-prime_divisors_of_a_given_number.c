#include<stdio.h>
int non_prime(int x)
{
    int fc=0,j;
    for(j=1;j<=x;j++)
    {
        if(x%j==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,fc,res=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(non_prime(i))
            {
                res++;
            }
        }
    }
    printf("%d",res);
    return 0;
}