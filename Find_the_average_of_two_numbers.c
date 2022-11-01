#include<stdio.h>
int main()
{
    float result;
    int x,y;
    scanf("%d %d",&x,&y);
    result=float(x+y)/2;
    printf("%.4f",result);
    return 0;
}