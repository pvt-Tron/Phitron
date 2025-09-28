#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int v=n;
    int k=n+1;
    
    do
    {
        for(int i=v-2;i>=0;i--)
        {
            printf(" ");
        }

        for(int j=k;j>v;j--)
        {
            printf("*");
        }
        printf("\n");
        v=v-1;
        k=k+1;
    } while (v>0);
    int z=0;
   
    k=k-2;
    do
    {
        for(int i=0;i<z;i++)
        {
            printf(" ");
        }

        for(int j=k;j>0;j=j-2)
        {
            printf("*");
        }
        printf("\n");
        z=z+1;
        k=k-1;
    } while (k>0);
    
    
return 0;

}