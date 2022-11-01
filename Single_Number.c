#include<stdio.h>
int main()
{
    int arr[1000],c,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               c++;
           }
       }
       if(c==1)
       {
           printf("%d",arr[i]);
       }
    }
    return 0;
}