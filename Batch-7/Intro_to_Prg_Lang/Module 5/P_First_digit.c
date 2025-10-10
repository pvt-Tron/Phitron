#include<stdio.h>
int main()
{

    int x, y;
    scanf("%d%d", &x);

    while(x){
        y = x;
        x/=10;
    }
    if(y%2 == 0) printf("EVEN");
    else printf("ODD");

    return 0;
}