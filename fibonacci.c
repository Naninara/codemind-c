#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
    int n1=0,n2=1,n3,n,i;
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    fibonacci(n1,n2,n);
    return 0;
    
}
void fibonacci(int n1,int n2,int n)
{
    int i,n3;
    for(i=3;i<=n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}