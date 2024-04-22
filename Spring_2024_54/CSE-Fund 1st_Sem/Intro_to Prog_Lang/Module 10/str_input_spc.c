#include<stdio.h>
#include<string.h>
int main()
{
    char arrc1[20];
    //scanf("%s", &arrc1);
    fgets(arrc1, 100, stdin);
    //gets(arrc1);
    arrc1[15] = '\0';
    printf("%s", arrc1);

    return 0;
}