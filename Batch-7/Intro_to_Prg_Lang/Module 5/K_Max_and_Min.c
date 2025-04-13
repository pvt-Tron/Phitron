#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max, min;
    if(a > b){
        if(a > c){
            max = a;
            if(b > c) min = c;
            else min = b;
        }
        else{
            max = c;
            min = b;
        }
    }
    else if(a < b){
        if(b > c){
            max = b;
            if(a > c) min = c;
            else min = a;
        }
        else{
                max = c;
                min = a;
            }
    }
    else if(a == b || b == c || a == c){
        if(a > c){
            max = a;
            min = c;
        }
        else if(a == c){
            if(b > c){
                max = b;
                min = c;
            }
            else{
                if(b < c){
                    max = c;
                    min = a;
                }   
            }
        }
        else if(a == b){
            if(b > c){
                max = b;
                min = c;
            }
            else{
                if(a < c){
                    max = c;
                    min = a;
                }   
            }
        }
    }

    printf("%d %d", min, max);
    return 0;
}
    // if(a > b){
    //     if(b > c){
    //         max = a;
    //         min = c;
    //     }
    //     else{
    //         max = a;
    //         min = b;
    //     }
    // }
    // else if(b > a){
    //     if(a > c){
    //         max = b;
    //         min = c;
    //     }
    //     else{
    //         max = c;
    //         min = a;
    //     }
    // }
    // else if(a == b){
    //     if(a > c){
    //         max = b;
    //         min = c;
    //     }
    //     else{
    //         max = c;
    //         min = b;
    //     }
    // }
    // else if(c == b){
    //     if(a > c){
    //         max = a;
    //         min = c;
    //     }
    //     else{
    //         max = c;
    //         min = a;
    //     }
    // }