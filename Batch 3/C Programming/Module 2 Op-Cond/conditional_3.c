#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk >= 10000)
        {
            printf("Sint Martin jabo\n");
        }
        else
        {
            printf("Ferot chole jabo\n");
        }
    }
    else
    {
        printf("Kotaho jabo na\n");
    }
    return 0;
}

    //else if(tk >= 20)
    //{
    //    printf("Ice cream khabo");
    //}
    //printf("%d",tk);