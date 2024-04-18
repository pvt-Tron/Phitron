#include<stdio.h>
int main()
{
    char l;
    scanf("%c", &l);
    if(l == 'z'){printf("a");}
    else{printf("%c", l + 1);}
    
    return 0;
}