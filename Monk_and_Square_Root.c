#include<stdio.h>
int main()
{
    long int i,j,n,m,k,l,y=-1;
    scanf("%ld",&n);
    while(n>0)
    {
        scanf("%ld %ld",&l,&m);
        y=-1;
        for(i=0;i<m;i++)
        {
            if((i*i)%m==l)
            {
               y=i;
               break;
            }
        }
        printf("%ld
",y);
        n--;
    }
    return 0;
}