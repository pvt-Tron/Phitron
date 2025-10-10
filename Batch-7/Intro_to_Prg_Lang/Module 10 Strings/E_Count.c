#include<stdio.h>
#include<string.h>
int main()
{

    char str[1000001];
    // fgets(str, 100001, stdin);
    scanf("%s", &str);
    int n = strlen(str);
    int cnt = 0, num = 0;
    // for(int i = 0; str[i] != '\0'; i++){
    for(int i = 0; i < n; i++){
        // if(str[i] == '\\') break;
        // num = str[i] - 48;
        num = str[i] - '0';
        cnt += num;
        // cnt += str[i] - '0';
        // printf("%d %d %c\n", cnt , num, str[i]);
    }
    printf("%d\n", cnt);
    return 0;
}