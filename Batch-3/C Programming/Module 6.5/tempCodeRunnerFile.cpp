#include<stdio.h>
main()
{
    int a;
    scanf("%d",&a);
    
    int ab=a/10;
    int ba=(a%10);
    
    // printf("%d %d\n",ab,ba);
    
    if(ab%ba==0 || ba%ab==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}