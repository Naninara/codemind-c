#include<stdio.h>
int main()
{
    char s[100];
    int i,max=0;
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' '&&s[i+1]!=NULL)
        {
            max=max+1;
        }
    }
    printf("%d",max+1);
    return 0;
}