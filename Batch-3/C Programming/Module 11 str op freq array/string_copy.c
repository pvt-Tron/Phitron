#include<stdio.h>
int main()
{
    
    char a[1001],b[1001];
    scanf("%s %s",a,b);
    for(int i=0;i<=strlen(b);i++)
    {
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    return 0;

}