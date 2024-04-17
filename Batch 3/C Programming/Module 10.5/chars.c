#include<stdio.h>
int main()
{
char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    // char s[4]={'abcd'};
    char s[1001];
    fgets(s,sizeof(s), stdin);
    printf("%d",s[2]);
return 0;

}