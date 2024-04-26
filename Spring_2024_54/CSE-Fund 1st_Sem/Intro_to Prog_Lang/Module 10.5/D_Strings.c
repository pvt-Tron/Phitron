#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s", &s1);
    scanf("%s", &s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    printf("%d %d\n", len1, len2);
    printf("%s", s1);
    printf("%s\n", s2);
    
    char tmp1;
    tmp1 = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp1;
    printf("%s ", s1);
    printf("%s", s2);
    
    return 0;
}