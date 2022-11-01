#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    temp=sqrt(n);
    if(temp*temp==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}