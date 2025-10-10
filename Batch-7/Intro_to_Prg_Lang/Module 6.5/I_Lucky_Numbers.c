#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int n1 = n%10;
    int n2 = n/10;
    if(n1%n2 == 0 || n2%n1 == 0) printf("YES");
    else printf("NO");

    return 0;
}