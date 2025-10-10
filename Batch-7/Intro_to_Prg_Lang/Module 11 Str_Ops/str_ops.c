#include<stdio.h>
#include<string.h>
int main()
{
    char st1[101]; // orange apple orange\0 apple\0 
    char st2[101];
    scanf("%s %s", &st1, &st2);
    
    char st1a[101];
    char st2a[101];
    strcpy(st1a, st1);
    strcpy(st2a, st2);

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

    // -- String Conpare -- //
    int cnt = 0;
    strcpy(st1, st1a);
    strcpy(st2, st2a);
    printf("%s %s\n", st1, st2);
    while(1){
        printf(".");
        if(st1[cnt] == '\0' && st2[cnt] == '\0'){
            printf("Equal");
            break;
        }
        if(st1[cnt] == '\0'){
            printf("1st smaller");
            break;
        }
        if(st2[cnt] == '\0'){
            printf("2nd smaller");
            break;
        }
        cnt++;
        if(cnt >= 100) break;
    }
    printf(".\n");
    // -- String Conpare >> strcmp <<
    // possible results 1 > (grater 1st) 0 > (equal) -1 > (grater 2nd) 

    printf("%d\n", strcmp(st1, st2));


    return 0;
}