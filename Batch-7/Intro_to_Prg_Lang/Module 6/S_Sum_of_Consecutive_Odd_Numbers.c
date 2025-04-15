#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        int sum = 0;
        if(x > y){
            int tmp = x;
            x = y;
            y = tmp;
        }
        for(int i = x + 1; i < y; i++){
            if(i%2 != 0) sum += i;
        }
        printf("%d\n", sum);
    }
    
    
    return 0;
}