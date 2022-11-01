#include<stdio.h>
int main()
{
    long int n,r,c=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}