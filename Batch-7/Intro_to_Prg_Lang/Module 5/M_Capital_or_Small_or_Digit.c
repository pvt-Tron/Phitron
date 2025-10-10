#include<stdio.h>
int main()
{

    char c;
    scanf("%c", &c);
    if(c <= 57) printf("IS DIGIT");
    else{
        printf("ALPHA\n");        
        if(c > 91) printf("IS SMALL");
        else printf("IS CAPITAL");
    }
    return 0;
}