#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int k,ad;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i=n;i++)
    {
        scanf("%d",&ar[i]);
        ad=ad+ar[i];
    }
    
    int z=abs(ad);
    printf("%d",z);

    return 0;
}


//int x=UINT_MAX,ad;
//long long int k;
    //int ad;
    
//  ??  long long int z=|k*-1|
    //long long int z=(k*(-1));
    //if(k<0)
    //    {
    //        ad
    //    }
    //int abs(int ad);
    