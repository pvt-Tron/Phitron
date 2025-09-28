#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    //long long int k;
    //long long int ad;
    long long int k;
    long long int ad;
    
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        ad=(ad+k);
    }
    //    ad+ad+k;
    //}
    //long long int z=k*(-1);
    if(k<0)
        {
            ad=abs(ad);
        }

    printf("%d",ad);

    return 0;
}