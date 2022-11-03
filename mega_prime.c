#include<stdio.h>
int main()
{
    int temp=0,sum=0,count=0,i,n,r;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    {
        while(n>0)
        {
            sum=0;
            r=n%10;
            for(i=2;i<r;i++)
            {
                if(r%i==0)
                sum++;
            }
            if (r==1)
            temp++;
            n=n/10;
        }
    }
    if(count ==0&& sum==0&&temp!=1)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
    return 0;
}