#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    // printf("Burger khabo");
    if(tk >= 5000)
    {   
        printf("Cox'sbazar jabo\n");

        if(tk >= 10000)
        {
            printf("Saint Martin jabo\n");
        }
        else
        {
            // printf("jabo na\n");
            printf("Ferot chole ashabo\n");
        }
    }    
    else
    {
        printf("Kothao jabo na\n");
    }

    return 0;
}