#include<stdio.h>
int main()
{
    int a,b,c, min1, max1, tmp1;
    scanf("%d %d %d", &a, &b, &c);
    if(a <= b && a <= c){min1 = a;}
    else if(b <= a && b <= c){min1 = b;}
    else if(c <= a && c <= b){min1 = c;}
    else{
        if(min1 < a){
            min1 = a;
        }
        else if(min1 < b){
            min1 = b;
        }
        else if(min1 < c){
            min1 = c;
        }
    }
    

    if(a >= b && a >= c){max1 = a;}
    else if(b >= a && b >= c){max1 = b;}
    else if(c >= a && c >= b){max1 = c;}
    else{
        if(max1 > a){
            max1 = a;
        }
        else if(max1 > b){
            max1 = b;
        }
        else if(max1 > c){
            max1 = c;
        }
    }
    if(min1 >= max1 || max1 < min1){
        tmp1 = min1;
        min1 = max1;
        max1 = tmp1;
    }

    printf("%d %d", min1, max1);
    

    return 0;
}