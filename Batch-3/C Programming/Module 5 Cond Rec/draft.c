#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    if( (a%b==0) || (b%a==0) )
    {
        printf("Multiples\n");
    }
    
    //else if(b%a==0)
    //{
    //    printf("Multiples\n");
    //}

    else
    {
        printf("No Multiples\n");
    }
    //
char a;
    scanf("%c" ,&a);
    
    if(a>='a' && a<='z')
    {
        //choto hater
        int ans=a-32;
        printf("%c",ans);

    }
    else
    {
        int ans=a+32;
        printf("%c",ans);

    }
return 0;

}
