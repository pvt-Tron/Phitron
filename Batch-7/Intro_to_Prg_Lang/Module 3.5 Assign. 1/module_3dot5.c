#include<stdio.h>
int main()
{
    printf("I Love Practice\n");

    long int x,y;
    scanf("%d%d", &x, &y);
    printf("%d", x + y);

    int a;
    long long int b;
    double c;
    char d;
    scanf("%d%lld%lf%s", &a, &b, &c, &d);
    printf("%d\n%lld\n%.2lf\n%c", a, b, c, d);
    printf("\n");
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("I Love Practice\n");
    }

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i%5 == 0) printf("%d Yes\n", i);
        else printf("%d No\n", i);
    }

    return 0;
}
