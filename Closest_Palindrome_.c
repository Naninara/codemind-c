#include<stdio.h>
int ispal(int x)
{
    int y,d,res=0;
    y=x;
    while(y)
    {
        d=y%10;
        res=res*10+d;
        y=y/10;
    }
    if(res==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,pp,np;
    scanf("%d",&n);
    for(pp=n-1;;pp-=1)
    {
        if(ispal(pp))
        {
            break;
        }
    }
    for(np=n+1;;np+=1)
    {
        if(ispal(np))
        {
            break;
        }
    }
    if(n-pp>np-n)
    {
        printf("%d",np);
    }
    if(n-pp<np-n)
    {
        printf("%d",pp);
    }
    if(n-pp==np-n)
    {
        printf("%d %d",pp,np);
    }
    
}