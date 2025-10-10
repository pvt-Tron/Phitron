#include<stdio.h>
#include<string.h>
int main()
{
    char alpha[26];
    int num[26] = {0};
    for(int i = 0; i < 26; i++){
        alpha[i] = 'a'+ i;
    }
    // printf("..");
    // for(int i = 0; i < 26; i++){
    //     printf("%c", alpha[i]);
    // }
    char c;

    char str[1000001];
    fgets(str, 1000001, stdin);
    // int x = 0;
    // while (scanf("%c", &str[x]) != '\\')
    // {
    //     x++;
    //     // if(x >= 100) break;
    // }
    // str[x] = '\0';
    
    // printf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        // printf("..");
        // scanf("%c", &c);
        c = str[i];
        num[c - 'a']++;
        // if(i > 100) break;
    }

    for(int i = 0; i < 26; i++){
        if(num[i] != 0) printf("%c : %d\n", alpha[i], num[i]);
    }

    

    return 0;
}