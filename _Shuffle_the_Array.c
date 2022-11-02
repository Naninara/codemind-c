#include<stdio.h>
int main()
{
    int n,a1[100],a2[100],b,i,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    b=n/2;
    for(i=0;i<b;i++)
    {
        a1[i]=arr[i];
    }
    for(i=b;i<n;i++)
    {
        a2[j]=arr[i];
        j++;
    }
    for(i=0;i<b;i++)
    {
        printf("%d %d ",a1[i],a2[i]);
    }
    
}