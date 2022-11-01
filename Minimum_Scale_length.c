#include<stdio.h>
int gcd(int a,int b)
{
    int i,gcdd=0;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcdd=i;
        }
    }
    return gcdd;
}
int main()
{
    int num1,num2,gcdd,i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    num1=arr[0];
    num2=arr[1];
    gcdd=gcd(num1,num2);
    for(i=2;i<n;i++)
    {
        gcdd=gcd(arr[i],gcdd);
    }
    printf("%d",gcdd);
}