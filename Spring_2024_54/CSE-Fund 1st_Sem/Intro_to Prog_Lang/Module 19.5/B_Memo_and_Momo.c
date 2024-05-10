#include<stdio.h>

int whoWin1(long long int a2,long long int b2,long long int k2){
    if(a2%k2 == 0 && b2%k2 == 0){return 3;}
    else if(a2%k2 == 0 && b2%k2 != 0){return 1;}
    else if(a2%k2 != 0 && b2%k2 == 0){return 2;}
    else{return 0;}
}

int main()
{
    long long int a1, b1, k1;
    int result1 = 0;
    scanf("%lld %lld %lld", &a1, &b1, &k1);
    result1 = whoWin1(a1, b1, k1);
    if(result1 == 3){printf("Both");}
    else if(result1 == 2){printf("Momo");}
    else if(result1 == 1){printf("Memo");}
    else{printf("No One");}

    return 0;
}