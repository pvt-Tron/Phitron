#include<stdio.h>
int main()
{
    char str[1000001];
    fgets(str, 1000001, stdin);
    for(int i = 0; str[i] != '\\'; i++) printf("%c", str[i]);
    // for see \ need to used escape '\\'
    return 0;
}