#include<stdio.h>
int main()
{
    int n;
    int x;
    int y;
    int no=0;
    int ne=0;
    int np=0;
    int ni=0;

    scanf("%d\n",&n);
    for(int i=1;i<=n;i=i+1)
    {
        scanf("%d ",&y);

        if ((y%2==0) || (y==0))
        {
            no=no+1;
        }
        else
        {
            ne=ne+1;
        }

        if(y>0)
        {
            np=np+1;
        }
        else if(y<0)
        {
            ni=ni+1;
        }
        else
        {
            np=np+0;
        }

    }
    printf("Even: %d\nOdd: %d\n",no,ne);
    printf("Positive: %d\nNegative: %d\n",np,ni);



return 0;

}