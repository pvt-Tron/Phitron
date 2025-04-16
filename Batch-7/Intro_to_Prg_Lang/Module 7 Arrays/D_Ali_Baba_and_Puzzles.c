#include<stdio.h>
int main()
{
    int a, b, c, d;
    
    scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
    
    int flag = 0;
    
    if(a+b-c== d) flag = 1;
    else if(a+b*c == d) flag = 1;
    else if(a-b+c == d) flag = 1;
    else if(a-b*c == d) flag = 1;
    else if(a*b+c == d) flag = 1;
    else if(a*b-c == d) flag = 1;
    
    if(flag) printf("YES");
    else printf("NO");

    return 0;
}

