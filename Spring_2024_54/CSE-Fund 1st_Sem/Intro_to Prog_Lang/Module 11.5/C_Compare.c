#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001] = {0};
    char s2[1001] = {0};
    fgets(s1, 1001, stdin);
    fgets(s2, 1001, stdin);
    int lenx1 = strcmp(s1, s2);
    //printf("%d ", lenx1);
    if(lenx1 > 0){printf("%s", s2);}
    else{printf("%s", s1);}
    return 0;
}