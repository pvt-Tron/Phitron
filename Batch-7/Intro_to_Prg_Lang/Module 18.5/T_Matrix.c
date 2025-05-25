// // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
// //
#include<stdio.h>
// !!!!!!!  >>>>>>>>>>>>>>>> //
//  #include<stdlib.h>
// #include<limits.h>
// #include<math.h>
int main()
{
    int sq;
    scanf("%d", &sq);
    if(sq < 2){
        scanf("%d", &sq);
        printf("%d", sq);
        return 0;
    }
    int mt[sq][sq]; //  <<<
    // int mt[sq][sq];
    for(int r = 0; r < sq; r++){
        for(int c = 0; c < sq; c++){
            scanf("%d", &mt[r][c]);
        }
    }
    int prd = 0;
    int snd = 0;
    for(int r = 0; r < sq; r++){
        for(int c = 0; c < sq; c++){
            if(r == c) prd += mt[r][c];
            else if(c == sq - 1 - r) snd += mt[r][c]; 
        } // (r + c == sq - 1)
    }
    // prd -= snd;
    // prd = abs(prd);
    // if(prd < 0) prd *= -1;
    printf("%d", abs(prd - snd));

    return 0;
}