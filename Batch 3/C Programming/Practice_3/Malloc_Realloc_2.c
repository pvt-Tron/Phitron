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
    int i=0;
    int j=0;
    int n = strlen(s);
    for(i=0;i<n;i=i+1)
    {   
        for(j=i;s[j]!=' ';j=j+1)
        {
            if(s[j]=='\0'){break;}
            printf("%c",s[j]);                        
        }
        i=j;
        if(s[i]=='\0'){break;}
        printf("\n");
    }   
    //Write your logic to print the tokens of the sentence here.
    return 0;
}
