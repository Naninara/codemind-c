#include<stdio.h>
int main()
{
    int n,i,j,c=0,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c=1;
                arr[j]=-1;
            }
        }
        if(c==1)
        {
            arr[i]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            continue;
        }
        else
        {
            x=1;
            printf("%d ",arr[i]);
        }
        
    }
    if(x==0)
    printf("-1");
}