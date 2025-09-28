#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Burger khabo");
    }
    else if(tk >= 50)
    {
        printf("fuchka khabo");
    }
    else if(tk >= 20)
    {
        printf("Ice cream khabo");
    }
    else
    {
        printf("Khnabo na");
    }
   //printf("%d",tk);
   return 0;
}