#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a1, a2, a3, tmp1, max1, max2, max3;
    int result1 = 0, step1 = 0; 
    bool flag1 = false;
    scanf("%d %d %d", &a1, &a2, &a3);
    // if(a1 < a2 & a1 < a3){
    //     if(a3)result1 = a1;}
    // if(a2 < a1 && a2 < a3){
    //     result1 += a2;
    //     a1 = a1 - a2;
    //     a3 = a3 - a2;
    // }
    // if(a3 > a1){
    //         tmp1 = a1; 
    //     }
    
    if(a1%2 != 0){flag1 = true;}
    if(a2 < a3){
        step1 = a3 - a2;
        max2 = a3;
        max3 = a2;
        }
    else{
        max2 = a2;
        max3 = a3;
    }
    if(a1 > a2 || a1 > a3){
        if(step1){
            result1 = result1 + step1;
            a1 -= step1;
            a3 -= step1;
            }
        result1 += (a1 / 2);
     
            if(step1){

                // result1 = result1 + step1;
                // max1 = a1 - step1;
                // max2 = max2 - step1;
                // max3 = max3 - step1;
                if(a1 >= a2){
                    if(max1 >= max2){
                    result1 = result1 + max2;
                    max1 = a1 - max3;
                    max2 = max2 - max3;                        
                    }
                
                }
                else{result1 = result1 + max3;}
                for(int i = step1; i > 0; i--){
                    
                }
            
            }
            for(int i = a1; i > 0; i--){
                if(i == 1 && a3 > 0 && a2 >= 1){
                    result1++;
                    break;
                }
                else{
                    if(i == a1 & i%2 != 0){i--;}
                }
                if(a3 > 0){
                    if(a2 > 0){
                        a2--;
                        a3--;
                        result1++;
                    }
                    else{
                        i--;
                        a3--;
                        result1++;
                    }
                }
                else{break;}
            }
    }
    if(flag1 && max2 > 0){result1++;}
    printf("%d", result1);

    return 0;
}
       // if(m1 > 0){
        //     if(k1 > n1){
        //         if(m1 > n1){m1 = n1;}
        //     }
        //     else{
        //         if(m1 > k1){m1 = k1;}
        //     }
        //     res1 += m1;
        //     n1 -= m1;
        //     k1 -= m1;
        //     m1 = 0;
        // }
        // while(n1 > 0 && k1 > 0){
        //     if(n1 < 2){break;}
        //     res1++;
        //     n1 -= 2;
        //     k1--;
        // }
        // if(n1 <= 0 || k1 <= 0){
        //     if(nodd1){res1++;}
        //     if(k2 > n2){if(res1 > n2){res1 = n2;}}
        //     else{if(res1 > k2){res1 = k2;}}
        //     printf("%d", res1);
        //     break;
        // }
    // }
    // for(int i = m1; i >= 1; i--){
    //     if(k1 == 0 || n1 == 0){break;}
    //     if(k1 == 0 && n1 == 0){break;}
    //     res1++;
    //     m1--;
    //     n1--;
    //     k1--;
    // }
    // while(n1 >= 2){
    //     if(k1 < 1){break;}
    //     res1++;
    //     n1-=2;
    //     k1--;
    // }