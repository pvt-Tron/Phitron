#include <stdio.h>

int main() 
{
    int a, b;
    int aj, bj;
    int i;
    char otn[][9]={"one","two","three","four","five","six","seven","eight","nine"};
    
    scanf("%d\n%d", &a, &b);

    for(i=a;i<=9;i=i+1)
    {
        if (a<=9)
        {
            
            for(aj=a-1;aj<=9;aj=aj+1)
            {
            
            printf("%s\n",otn[aj]);
            }
        }
        if (aj=9)
        {
            break;    
            printf("\n");        
        }    
    }
    if(a%2==0)
        {
            printf("even\n");
        }
    else
        {
            printf("odd\n");
        }
        
        
    
    
    for(i=b-1;i<=9;i=i+1)
    {
    
        if (b<=9)
        {

            for(bj=b-1;bj<=9;bj=bj+1)
            {
            
                printf("%s\n",otn[bj]);

            }        
        }
        if (bj=9)
        {
            break;
            printf("\n");
        }
        
    }
        
    if(b%2==0)
        {
            printf("even\n");
        }
    else
        {
            printf("odd\n");
        }
        
            
        
       	 // Complete the code.

    return 0;
}

