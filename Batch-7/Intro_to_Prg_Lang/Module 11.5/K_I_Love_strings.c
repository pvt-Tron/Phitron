#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n = 51;
        char st1[n];
        char st2[n];
        char sts[n];
        char c;
        int cnt1 = 0;
        int cnt2 = 0;
        scanf("%c", &c);
        scanf("%s", &st1);
        // for(int i = 0; i < n; i++){
        //     scanf("%c", &c);
        //     cnt1++;
        //     printf("%c%d", c, cnt1);
        //     if(c != ' '){
        //         st1[i] = c;
        //     }
        //     else {
        //         st1[i] = '\0';
        //         break;
        //     }
        scanf("%s", &st2);
        
        int i = 0;
        while(st1[i] != '\0' || st2[i] != '\0'){
            if(st1[i] == '\0' && st2[i] == '\0') break;
            else if(st1[i] == '\0' || st2[i] == '\0'){
                if(st1[i] == '\0'){
                    sts[i] = st2[i];
                }
                else sts[i] = st1[i];
            }
            else if(st1[i] != '\0' && i%2 == 0){
                sts[i] = st1[i];
            }
            else sts[i] = st2[i];
            i++;
            // printf("%c.", sts[i]);
            if(i >= 50) break;
        }
        printf("%s", sts);
        if(t > 0) printf("\n");
    }

    return 0;
}