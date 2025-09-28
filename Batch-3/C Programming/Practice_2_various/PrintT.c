#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]%*c", s);
    // printf("%s",s);
    s = realloc(s, strlen(s) + 1);
    for(int i=0;i>strlen(s);i=i+1)
    {
    //     for(int i=0;*s!=' ';i=i+1)
    //     {
        if(s[i]==' ')
        {
            printf("\n");
            continue;    
        }
        printf("%c",s[i]);            
        // }
    }   
    //Write your logic to print the tokens of the sentence here.
    return 0;
}