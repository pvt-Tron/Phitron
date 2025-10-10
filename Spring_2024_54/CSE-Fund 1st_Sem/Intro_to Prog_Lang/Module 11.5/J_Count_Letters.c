#include<stdio.h>
#include<string.h>
int main()
{
    int alph1[26] = {0};
    char arrc1[1001];
    int cnt1 = 0;
    gets(arrc1);
    int n1 = strlen(arrc1);
    for(int i = 0; arrc1[i] != '\0'; i++){
        cnt1 = arrc1[i] - 'a';
        alph1[cnt1]++;
    }
    for(int i = 0; i < 26; i++){
        if(alph1[i] == 0){continue;}
        else{
            printf("%c : %d", (i + 'a'), alph1[i]);
            if(i < 25){printf("\n");}
            }

    }

    return 0;
}