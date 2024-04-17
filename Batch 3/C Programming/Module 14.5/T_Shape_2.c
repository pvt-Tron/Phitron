#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n+1;
    
    do
    {
        for(int i=n-2;i>=0;i--)
        {
            printf(" ");
        }

        for(int j=k;j>n;j--)
        {
            printf("*");
        }
        printf("\n");
        n=n-1;
        k=k+1;
    } while (n>0);
    
    
return 0;

}