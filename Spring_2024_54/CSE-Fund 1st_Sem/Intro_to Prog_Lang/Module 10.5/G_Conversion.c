#include<stdio.h>
#include<string.h>
int main()
{

    char s1[1000001];
    // char ch1;
    // = 'a';
    fgets(s1,1000001,stdin);
    for(int i = 0; s1[i] != '\0'; i++){
       // scanf("%c", &ch1);
      //  printf("%c %c ", ch1, s1[i]);
        if(s1[i] == ','){s1[i] = ' ';}
        if(s1[i] < 91 && s1[i] > 40){s1[i] = s1[i] + 32;}
        else if(s1[i] > 96 && s1[i] < 123){s1[i] = s1[i] - 32;}
        //printf("%c %c ", ch1, s1[i]);
    }
    int len1 = strlen(s1);
    for(int i = 0; i < len1; i++){
        printf("%c", s1[i]);
    }
    return 0;
}