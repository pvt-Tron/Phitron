#include<stdio.h>
#include<string.h>
int main()
{
    int str[1001];
    // fgets(str, 1001, stdin);
    // gets(str);
    char c;
    int x = 0;
    while(c != '\\'){
        scanf("%c", &c);
        str[x] = c;
        printf("%c", str[x]);
        x++;
    }
    // printf("%s ", str);
    int n = 0;
    n = strl(str);
    printf("%d ", n);
    int j = n - 1;
    // printf("c%c s%c ", str[0]);
    int flag = 1;
    int n1 = n/2;
    // if(n%2 != 0) n1;
    // else n1 = n/2 + 1;
    // printf(".");
    for(int i = 0; i <= n1; i++){
        printf(".");
        if(j <= i) break;
        printf(".%c %c :",str[i], str[j]);
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        printf("%c ", str[i]);
        j--;
    }
    if (flag) printf("YES");
    else printf("NO");
    
    return 0;
}