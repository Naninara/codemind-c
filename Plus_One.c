#include<stdio.h>
int main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum*10+arr[i];
    }
    if(arr[0]==9)
    {
        n=n+1;
    }
    sum=sum+1;
    i=n-1;
    while(sum)
    {
        r=sum%10;
        arr[i]=r;
        i--;
        sum=sum/10;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}