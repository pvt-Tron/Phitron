#include<stdio.h>
main()
{
    int a;
    int b;
    int c;
    int k;

    scanf("%d %d %d %d",&a,&b,&c,&k);

    if( k==(a+b-c) || k==(a-b+c) || k==(a+b*c) || k==(a-b*c) || k==(a*b+c) || k==(a*b-c) )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }   

    
    return 0;
}
// (k=(a+b)*c) || (k=(a-b)*c) || (k=(b+c)*a) || (k=(b-c)*a) || (k=(a-c)*b) || (k=(c+a)*b) 
// (k=a+b-c) || (k=a-c+b) || (k=a-b+c) || (k=c+a*b) || (k=c-a*b) || (k=a+c*b) || (k=a-c*b) || (k=b-a*c) || (k=b+a*c) || (k=a-b*c) || (k=a+b*c) || (k=b+c*a) || (k=b-c*a) || (k=c+b*a) || (k=c-b*a)