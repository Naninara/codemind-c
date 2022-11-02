#include<stdio.h>
int main()
{
    int n,p,i,j,sum=0;
    scanf("%d %d",&n,&p);
    int arr[n][p];
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    { 
        for(j=0;j<p;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}