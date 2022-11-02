#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0,j,x=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        count=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d",i);
            x=1;
            break;
        }
    }
    if(x==0)
    printf("-1");
}