#include<stdio.h>
int main()
{
    int i=0,r,n,j,count=0,temp;
    scanf("%d",&n);
    int arr[100];
    while(n>0)
    {
        r=n%10;
        arr[i]=r;
        n=n/10;
        i++;
    }
    temp=i;
    for(i=0;i<temp;i++)
    {
        for(j=0;j<temp;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                count++;
            }
        }
    }
    if(count==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
    return 0;
    
}