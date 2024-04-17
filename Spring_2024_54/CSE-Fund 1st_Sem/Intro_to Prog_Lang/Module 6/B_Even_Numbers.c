#include<stdio.h>
int main()
{

    int n,flag = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            flag = 1;
            printf("%d", i);
            if(i == n){break;}
            else{
                printf("\n");
            }
        }
        else{continue;}
    }
    if(flag == 0){printf("-1");}
    return 0;
}