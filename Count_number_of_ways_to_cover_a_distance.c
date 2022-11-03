#include<stdio.h>
int fun(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return fun(n-1)+fun(n-2)+fun(n-3);
}
int main()
{
    int dis,res;
    scanf("%d",&dis);
    res=fun(dis);
    printf("%d",res);
    return 0;
}