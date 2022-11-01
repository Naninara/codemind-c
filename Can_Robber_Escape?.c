#include<stdio.h>
int main()
{
    int n,odd=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
    return 0;
}