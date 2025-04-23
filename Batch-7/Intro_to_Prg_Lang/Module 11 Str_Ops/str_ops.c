#include<stdio.h>
#include<string.h>
int main()
{
    char st1[101];
    char st2[101];
    scanf("%s %s", &st1, &st2);
    printf("%s %s\n", st1, st2);
    int n = strlen(st2);

    /* - String Copy - */

    // for(int i = 0; i < n; i++){
    //     st1[i] = st2[i];
    // }

    // -- String Copy >> strcpy <<

    strcpy(st1, st2);
    
    printf("%s %s\n", st1, st2);

    // -- String Concat >> strcat <<

    strcat(st1, st2);
    printf("%s\n", st1);

    return 0;
}