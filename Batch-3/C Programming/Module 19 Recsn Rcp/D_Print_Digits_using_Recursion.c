#include<stdio.h>
void fun(int n)
{
    if(n==0) return;
    int x=n%10; // 4
    fun(n/10);
    printf("%d ",x);

}
int main()
{
    int test;
    scanf("%d",&test);
    for (int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        // >> 0 issue
        if(n==0)
        {
            printf("0");
        }
        
        printf("\n");
    }
 
    return 0;

}
   // char ar[n][10];
    // int i=0;
    // int k=0;
    // for (i=0;i<n;i++);
    // {
    //     for(int j=0;j<10;j++)
    //     {
    //         scanf("%d",&ar[i][j]);
    //         if(ar[i][j]==EOF)
    //         {
    //             ar[i][j]='\0';
    //             if(j<k){k=j;}    
    //             break;
    //         }
    //     }
    // }

    // for (i=0;i<n;i++);
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         if(ar[i][j]=='\0'){break;}
    //         printf("%d ",ar[i][j]);
    //     }
    //     printf("\n");
    // }
    