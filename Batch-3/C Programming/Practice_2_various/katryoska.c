#include<stdio.h>
int main()
{
    int a,b,c;
    int tot=0;
    int max=0;

    scanf("%d %d %d\n",&a,&b,&c);
    
    int kac=c;
    int kabc=c;

    if (c==0 || a==0)
    {
        printf("0\n");
    }
    else
    {
        if (a>b && a>c)
        {
            max=a;
        }
        else if(b>a && b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
        
        for(int i=1;i<=max;i++)
        {
            if (c<=0 || a<=0)
            {
                break;
            }
            // tot kc kabc
            if (a>0 && b>0 && c>0)
            {
                kabc=kabc+1;
            }
            else
        
            if (a>0 && c>0)
            {
                kac=kac+1;
            }
            tot=tot+(kac+kabc);
            a=a-1;
            b=b-1;
            c=c-1;

        }

        printf("%d\n",tot);
    
    }
        
    return 0;
    
}