// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include<stdio.h>
#include<string.h>
int vowelsck(char *c, int cnt){
    char wow[5] = {'a', 'e', 'i', 'o', 'u'};
    if(cnt >= 5) return 0;
    if(c == wow[cnt] || c == wow[cnt] - 32) return 1;
    return vowelsck(c, cnt += 1);
}
// int vowelsRec(char *str, int n){
//     if(n <= 0) return 0;
//     // sum += vowelsck(str[idx], 0);
//     return (vowelsRec(str, n - 1) + (vowelsck(str[n], 0)));
// }
int vowelsRec(char *str, int i){
    if(str[i] == '\0') return 0;
    int cnt = vowelsRec(str, i + 1);
    if(vowelsck(str[i], 0)) return (cnt + 1);
    else return cnt;
}
// int strlen_phi(char *str, int i){
//     if(str[i] == '\0') return 0;
//     int cnt = vowelsRec(str, i + 1);
//     return cnt + 1;
// }
int main()
{
    char str[201];
    fgets(str, 200, stdin);
    // int n = strlen(str);
    // if(n == 1){
    //     char s;
    //     scanf("%c", s);
    //     if(vowelsck(s, 0)) printf("1");
    //     else printf("0");
    // }
    int ws = vowelsRec(str, 0);
    printf("%d", ws);

    return 0;
}