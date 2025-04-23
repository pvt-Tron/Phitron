#include<stdio.h>
#include<string.h>
int main()
{
// -- Initialization
    char str[5] = {'T', 'e', 's', 't', '\0'};
    printf("%s\n", str);
    char str1[16] = "Testing and run!"; // minnig >'\0'
    printf("%s\n", str1);
    char str2[17] = "Testing and run!"; // +1 for \0
    printf("%s\n", str2);
    
// -- Length
    char st[101];
    scanf("%s", &st);
    int cnt = 0;
    for(int i = 0; st[i] != '\0'; i++) cnt++;
    printf("%d\n", cnt);
    // - using "strlen" need // #include<string.h>
    int cnt1 = strlen(st); 
    printf("%d\n", cnt);
    printf("%d\n", strlen(st));

    return 0;
}