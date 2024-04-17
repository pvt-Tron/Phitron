#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    int ab=(a/10);
    int ba=(a%10);
    
    printf("%d %d\n",ab,ba);
    
    if(a==10)
    {
        printf("YES\n");
    }

    else if(a%ba==0)
    {
        printf("YES\n");
    }
    
    else if(a%ab==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
        printf("%d %d\n",ab%ba,ba%ab);
    }

    return 0;
}