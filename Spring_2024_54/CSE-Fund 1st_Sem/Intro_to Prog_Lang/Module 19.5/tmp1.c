#include<stdio.h>

// int whoWin1(long int a2,long int b2,long int k2){
//     if(a2%k2 == 0){
//         if(b2%k2 == 0){return 3;}
//         else{return 1;}
//     }
//     else if(b2%k2 == 0){return 2;}
//     else{return 0;}
// }

int main()
{
    long int a1, b1, k1;
    // int result1 = 0;
    scanf("%ld %ld %ld", &a1, &b1, &k1);
    if(a1%k1 == 0){
        if(b1%k1 == 0){printf("Both");}
        else{printf("Memo");}
    }
    else if(b1%k1 == 0){printf("Momo");}
    else{printf("No One");}
    //result1 = whoWin1(a1, b1, k1);
    // if(result1 == 3){printf("Both");}
    // else if(result1 == 2){printf("Momo");}
    // else if(result1 == 1){printf("Memo");}
    // else{printf("No One");}

    return 0;
}

// #include<stdio.h>

// int main()
// {
//     long int a1, b1, k1;
//     scanf("%ld %ld %ld", &a1, &b1, &k1);
//     if(a1%k1 == 0){
//         if(b1%k1 == 0){printf("Both");}
//         else{printf("Memo");}
//     }
//     else if(b1%k1 == 0){printf("Momo");}
//     else{printf("No One");}
//     return 0;
// }