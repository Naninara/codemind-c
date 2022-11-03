#include<stdio.h>
int main()
{
    int i,n,m,temp=0,c,r,arr[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i<=m;i++)
    {
        temp=i;
        c=0;
        while(temp!=0)
        {
            r=temp%10;
            if(r==0||i%r!=0)
            {
                c=1;
                break;
            }
            temp=temp/10;
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}