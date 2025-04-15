#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0; //__INT_MAX__
    int num;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(i == 0) max = num;
        else if(max < num) max = num;
    }
    printf("%d", max);
    
    return 0;
}