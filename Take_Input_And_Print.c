#include<stdio.h>
int main()
{
    char str[999];
    fgets(str,999,stdin);
    printf("%s",str);
    return 0;
}