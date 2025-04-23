#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    // printf(".");
    char str[101];
    char c;
    scanf("%c", &c);
    for(int i = 0; i < n; i++){
        // fgets(str, 101, stdin);
        gets(str);
        // scanf("%s", &str);
        // printf("%s ", str);
        int lstr = strlen(str);
        // printf("%d\n", lstr);
        if(lstr > 10){
            printf("%c%d%c\n", str[0], lstr - 2, str[lstr - 1]);
        }
        else printf("%s\n", str);
        // printf("\n");
    }
    
    return 0;
}