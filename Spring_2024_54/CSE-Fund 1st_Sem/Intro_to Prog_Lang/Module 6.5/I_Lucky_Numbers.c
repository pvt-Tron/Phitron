#include<stdio.h>
int main()
{
    int n, a1, a2;
    scanf("%d", &n);
    a2 = n%10;
    a1 = n / 10;
    if(a2 == 0){printf("YES");}
    else if(a1%a2 == 0 || a2%a1 == 0){printf("YES");}
    else{printf("NO");}    
    return 0;
}