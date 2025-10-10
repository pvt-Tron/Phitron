#include<stdio.h>
// #include<string.h>
int main()
{
    //input.txt Testing and run
    char str[50];
    
    // scanf("%s", &str); scanf
    
    // get(str);     // get need: #include<string.h>
    
    // fgets syntax: 
    // fgets([string],[num of chars to get including \0],[origin:'stdin'])
    // base is 1 for 1st char (if target has 0..>endinput +1 +1 for'\0')
    
    fgets(str, 6, stdin);
    
    printf("%s", &str);


    return 0;
}