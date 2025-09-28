#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    //printf("%d",v);

    if(v<0)
    {
        printf("A is smaler\n");
    }
    else if(v>0)
    {
        printf("B is smaler\n");
    }
    else
    {
        printf("Same\n");
    }
return 0;

}