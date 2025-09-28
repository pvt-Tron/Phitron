#include<stdio.h>
int main()
{
    int a,b,c;
    int i=0;
    scanf("%d %d %d\n",&a,&b,&c);

    int tot=0;
    int max=0;
//    int kac=0;
//    int kabc=0;
    

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
        
        for(i=1;i<=max;i++)
        {
            if (c<=0 || a<=0 || b<=0)
            {
                break;
            }
            // tot kc kabc
            if (a>0 && b>0 && c>0)
            {
                tot=tot+1;
            }
            a=a-1;
            b=b-1;
            c=c-1;

        }

        for(int j=i;i<=max;j++)
        {
            if (c<=0 || a<=0)
            {
                break;
            }
            if (a>0 && c>0 && b<=0)
            {
                tot=tot+1;
                 if (a==2 && b<=0 && c==1)
                {
                    a=a-2;
                }
                else
                {
                    a=a-1;
                }
            }
        
            //tot=tot+(kac+kabc)

            a=a-1;           
            b=b-1;
            c=c-1;

        }

        printf("%d\n",tot);
    
    }
        
    return 0;
    
} 