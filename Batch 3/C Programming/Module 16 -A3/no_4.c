#include<stdio.h>
#include<string.h>
#include<math.h>
// // imputs   5
//             9 11 5 0 6
//             7 8
//             10 4
//             4
//             5 6 7 8
//             Fireworks
//             4
//             5 6 7 8
//             Fireworks
//             4
//             5 6 7 8
//             Fireworks can add .. n\n, ar[]\n, str\n,

// #define int count_before_zero(int,int)
int count_before_zero(int *x,int m)
{
    // return & parms 
    int c=0;
    while(x[c]!='\0')
    {
        c=c+1;
    }
    return c;
}

int sum()
{
    //return no parms
    int d,e;
    scanf("%d %d",&d,&e);
    int resultDE=d+e;
    return resultDE;
}

void divide(double f, double g)
{
    double result2 = (f/g);
    printf("The division is: %0.2lf\n",result2);
}

void fwks()
{
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    
    // char s;
    // scanf("%s",&s);
    printf("random %d %d Fireworks !\n",a2[0],a2[2]);
    }
}    

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // Return & Parameters
    int result=count_before_zero(a,n);
    printf("%d\n",result);
    
    //sum
    int sumscanf=sum();
    printf("The sum is: %d\n",sumscanf); 
    double diva,dive;
    
    //divide
    scanf("%lf %lf",&diva,&dive);
    divide(diva,dive);

    // no no
    fwks();
    fwks();
    return 0;
}
