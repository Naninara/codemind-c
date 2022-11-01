#include<stdio.h>
int main()
{
    int n,arr[100],i,c,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&c);
    max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]+c>=max)
        {
            max=arr[i];
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
}