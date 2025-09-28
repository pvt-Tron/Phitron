#include<stdio.h>
int main()
{
    int a;
    int i;
    //int m;
    int o=0;
    int arrirev[a];
    
    scanf("%d\n",&a);
    
    //m==a;
    o=o-a;
    
    do
    {
    scanf("%d" ,&arrirev[a-o]);
    
    o++;
     }
    while(o<=a);
    
    //for(i=0;i>a;i++)
    //{
    //scanf("%d ",&n);
    //arrirev[i]=n;
    //}
    
    //for(i=m;m>0;m--)
    for(i=a;a>0;a--)
    {
        printf("%d " ,arrirev[i]);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}