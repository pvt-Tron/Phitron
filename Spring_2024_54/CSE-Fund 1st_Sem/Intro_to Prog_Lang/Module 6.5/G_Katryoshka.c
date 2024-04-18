#include<stdio.h>
int main()
{
    int a1, a2, a3, tmp1, result1 = 0;
    scanf("%d %d %d", &a1, &a2, &a3);
    if(a1 < a2 & a1 < a3){
        if(a3)result1 = a1;}
    if(a2 < a1 && a2 < a3){
        result1 += a2;
        a1 = a1 - a2;
        a3 = a3 - a2;
    }
    if(a3 > a1){
            tmp1 = a1; 
        }
    }
    // for(int i = a1; i > 0; i--){
    //     if(i == 1 && a3 > 0 && a2 >= 1){
    //         result1++;
    //         break;
    //     }
    //     else{
    //         if(i == a1 & i%2 != 0){i--;}
    //     }
    //     if(a3 > 0){
    //         if(a2 > 0){
    //             a2--;
    //             a3--;
    //             result1++;
    //         }
    //         else{
    //             i--;
    //             a3--;
    //             result1++;
    //         }
    //     }
    //     else{break;}
    // }
    printf("%d", result1);
    return 0;
}