#include<stdio.h>
int prime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int y=0,n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(prime(i))
        {
            for(j=1;j<n;j++)
            {
                if(i*j==n)
                {
                    y=1;
                    printf("%d %d",i,j);
                    break;
                }
            }
        }
        if(y==1)
        {
            break;
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}