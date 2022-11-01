#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
    int n1=0,n2=1,n3,n,i;
    scanf("%d",&n);
    fibonacci(n1,n2,n);
    return 0;
    
}
void fibonacci(int n1,int n2,int n)
{
    int i,n3,sum=0;
    for(i=3;i<=n;i++)
    {
        n3=n1+n2;
        if(n3==n)
        {
            sum++;
        }
        n1=n2;
        n2=n3;
    }
    if(sum>0)
    printf("True");
    else
    printf("False");
}