#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int i;
    
    scanf("%d",&n);
    
    int ar[n];
    
    //int idxmin=0;
    int min=INT_MAX,idxmin;
    //scanf("%d",&ar[0]);
    //min=ar[0];
    // int x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i] <= min)
        {
            if( ar[i] < min)
            {
                idxmin=i+1;
                min=ar[i];

            }
           
        }
    
    }
    printf("%d %d",min,idxmin);
    return 0;
}