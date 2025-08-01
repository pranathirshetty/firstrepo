#include<stdio.h>
#include<string.h>
int main ()
{
    char s[50];
    printf("Enter a string ");
    fgets(s,sizeof(s),stdin);
    printf("Reversed string is %s ", strrev(s));
    return (0);

}