#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    gets(str);
    int n = strlen(str);
    for(int i = 0; i < n; i++){
        // printf("%d %c ", str[i], str[i]);
        if(str[i] == ',') printf(" ");
        else if(str[i] >= 'a') printf("%c", str[i] - 32);
        else printf("%c", str[i] + 32);
    }
    
    return 0;
}