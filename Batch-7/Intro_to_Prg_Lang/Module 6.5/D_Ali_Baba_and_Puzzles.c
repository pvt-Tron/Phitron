#include<stdio.h>
int main()
{

    long int a, b, c, d;
    int flag = 0;
    scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
    
    
    if(a - b + c == d || a + b - c == d || a + b * c == d || a - b * c == d || a * c + b == d) flag = 1;

    if(flag != 1){
        if(d < 0) if(d - (a * b - c) || d - (a * c + b)) flag = 1;
        else{
            if(a * b - c - d == 0 || a * c + b - d == 0) flag = 1;
        }
    }
    if(flag) printf("YES");
    else printf("NO");
    // printf(">%lld ", a * b - c);

    return 0;
}
        // if(d - (a * b - c) || d - (a * c + b)) flag = 1;
    // else if(a * b - c + d == 0 || a * c + b + d == 0) flag = 1;
    // else if(d - a * b - c || d - a * c + b) flag = 1;
    // if(a * b - c - d == 0 || a * c + b - d == 0) flag = 1;
    // else if(a * b - c == d || a * c + b == d) flag = 1;
    // if(a * b - c - d == 0 || a * c + b - d == 0) flag = 1;
    // else if(d < 0)
    // if(flag != 1){
        // if(d - (a * b - c) || d - (a * c + b)) flag = 1;
        // long long int t = 0;
        // if(!(a * b - c - d)) flag = 1;
        // else if(!(a * c + b - d)) flag = 1;
        // else if(!(d - a * b - c || d - a * c + b)) flag = 1;
        // t = a * b - c;
        // a * b - c
        // printf("%lld ", t);
        // if(t == d) flag = 1;

        // long long int t = 0;
        // for(int i = 0; i < flag; i++){
        //     t = (a + b - c);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     t = (a + b * c);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     t = (a - b * c);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     t = (a * c + b);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     t = (a * b - c);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     t = (a * c + b);
        //     // printf("%lld ", t);
        //     if(t == d || t + d == 0 || d - t == 0) break;
        //     flag = 0;
        // }


        
        