#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1001];
    char str2[1001];

    gets(str1);
    gets(str2);

    if(strcmp(str1, str2) == -1) printf("%s", str1);
    else printf("%s", str2);

    return 0;
}