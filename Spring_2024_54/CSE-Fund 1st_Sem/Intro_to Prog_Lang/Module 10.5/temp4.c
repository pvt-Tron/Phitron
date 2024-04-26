#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];

    fgets(s1,1001,stdin);
    //printf("%s", s1);
    int len1 = strlen(s1);
    printf("%d ", len1);
    int flag = 0;
    
    //if(len1%2 == 0){len1--;}
    //else{len1 -= 2;}
    int lenh2 = (len1 / 2) + 1;
    int lenh1 = lenh2;
    //else{len1 -= 2;}
    printf(" %d %d ", len1, lenh2);
    for(int i = lenh2; s1[lenh2] != '\0'; i++){
        if(s1[lenh1] != s1[i]){
            //printf("%d ", len1);
            flag = 1;
            break;
        }
        //printf("%c ", s1[i]);
        lenh1--;
    }
    if(flag == 1){printf("NO");}
    else{printf("YES");}
    return 0;
}