#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U')||(x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}    