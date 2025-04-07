#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    // printf("Burger khabo");
    if (tk >= 100)
    {   
        printf("Burger khabo\n");
    }
    else if(tk <= 50)
    {
        printf("Fuchka khabo\n");
    }
    else if(tk <=200)
    {
        printf("Chips khabo\n");
    }
    else
    {
        printf("Kichui khabo na\n");
    }

    return 0;
}