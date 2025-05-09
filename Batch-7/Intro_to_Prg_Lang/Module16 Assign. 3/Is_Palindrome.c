#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char *st, int x){
    int r = x - 1;
    for(int i = 0; i < x; i++){
        if(i == r) break;
        if(st[i] != st[r]) return 0;
        r--;
    }
    return 1;
}
int main()
{
    char s[1001];
    // printf(".");
    scanf("%s", s);
    // printf("%s", s);
    int n = strlen(s); 
    // for(int i = 0; i < n; i++){
    //     scanf("%d", &s[i]);
    // }
    if(is_palindrome(s, n)) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
