#include<stdio.h>
int main()
{
    int x;
    int ar[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    ar[2]=ar[1];
    ar[x]=ar[x+1];
    //for(i=x;i>=x;pos+1)

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;

}
