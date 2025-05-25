#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n1 = n;
    if(n1 == 1){
        printf("NO");
        return 0;
    }
    int flag = 1;
    if(n1%4 == 0 || n1%7 == 0 || n == 0){
        printf("YES");
        return 0;
    }
    
    while(n > 0){
        if(n%10 != 4 && n%10 != 7){
            flag = 0;//printf("%dNO ", n%10);
            break;
        }
        n /= 10;
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
}