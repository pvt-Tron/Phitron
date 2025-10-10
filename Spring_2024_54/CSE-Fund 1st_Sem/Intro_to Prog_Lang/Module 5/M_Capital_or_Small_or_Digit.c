#include<stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if(n > 47 && n < 58){printf("IS DIGIT");}
    else{
        if(n > 64){printf("ALPHA");}
            if(n > 64 && n < 97){printf("\nIS CAPITAL");}
            else{printf("\nIS SMALL");}
        }
    return 0;
}
    
