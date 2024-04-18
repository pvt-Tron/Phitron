#include<stdio.h>
int main()
{

    int a,b,c,d;
    scanf("%d %D %d %d", &a, &b, &c, &d);
    if(d == a + b - c || d == a - b + c || d == a * b - c || d == a * b + c || d == a + b * c || d == a - b * c){printf("YES");}
    // else if(d == c + b - a || d == c - b + a || d == c * b - a || d == c * b + a || d == c + b * a || d == c - b * a){printf("YES");}
    // else if(d == c * a - b || d == c * a + b ){printf("YES");}
    else{printf("NO");}
    
    return 0;
}