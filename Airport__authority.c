#include<stdio.h>
int main()
{
    int n,a[100],x,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            sum+=1;
        }
        else
        {
            sum+=2;
        }
    }
    printf("%d",sum);
}