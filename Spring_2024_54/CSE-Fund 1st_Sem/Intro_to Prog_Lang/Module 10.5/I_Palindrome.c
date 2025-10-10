#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];

    fgets(s1,1001,stdin);
    int len1 = 0, len2;
    int flag = 0;
    //printf("%s", s1);
    // len1 = strlen(s1) - 1;
    // len2 = len1;
    // len1--;
    while(s1[len1] != '\0'){len1++;}
    //printf(" len %d ", len1);
    len2 = len1 / 2;
    len1--;
    len1--;
    //printf(" len %d ", len1);

    //if(len1%2 == 0){len1--;}
    //else{len1 -= 2;}
    //int lenh2 = (len1 / 2) + 1;
    //int lenh1 = lenh2;
    //else{len1 -= 2;}
    //printf(" %d %d ", len1, lenh2);
    for(int i = 0; i <= len2; i++){
        //printf("%d ", i);
        //printf(">%c >%c ", s1[i], s1[len1]);
        if(s1[len1] != s1[i]){
            flag = 1;
            break;
        }
        
        len1--;
    }
    //printf("%d ", flag);
    if(flag == 1){printf("NO");}
    else{printf("YES");}
    return 0;
}