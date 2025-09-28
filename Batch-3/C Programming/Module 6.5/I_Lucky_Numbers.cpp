#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    int ab=(a/10);
    int ba=(a%10);
    
    //printf("%d %d\n",ab,ba);
    
    if(a==10 || ab==0 || ba==0 || (ba==0 && ab==0 ))
    {
        printf("YES\n");
    }

    else if( (ab%ba==0) || (ba%ab==0) )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    
    }
    //printf("%d %d\n",a%ba,a%ab);
    return 0;
}