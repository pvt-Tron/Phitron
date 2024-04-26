#include<stdio.h>
#include<string.h>
int main()
{
    int n1;
    scanf("%d", &n1);

    int len1 = 0;
    for(int i = 0; i <= n1; i++){
        char s1[1000001];
        fgets(s1,1001,stdin);
        //printf("%s ", s1);
        len1 = strlen(s1);
        // printf("%d %c ", len1, s1[0]);
        if(len1 >= 11){
            printf("%c%d%c\n", s1[0], len1 - 3, s1[len1 - 2]);
        }
        else{
                printf("%s", s1);
        }
        //printf("%d %c ", len1, s1[0]);
        // printf(" cnt %d outc %d \n", cnt1, ocnt1);
    }

    // for(int j = 0;j < strlen(outs1); j++){
    //     printf("%c", outs1[j]);
    // }
    return 0;
}