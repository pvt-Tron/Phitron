#include<stdio.h>
// #include<limits.h>
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int ar1[n];

    // int cs[100001] = {0};
    int fr[100001] = {0};
    for(int i = 0; i <= m; i++){
        fr[i] = 0;
    }

    // int max = INT_MIN;
    for(int i = 0; i < n; i++){
        scanf("%d", &ar1[i]);
        int val = ar1[i];
        fr[val]++;
    }

    for(int i = 1; fr[i] != 0; i++){
        printf("%d\n", fr[i]);
    }
    
    return 0;
}
        // if(max < ar1[i]) max = ar1[i];
        // int j = 0;
        // int flag = 0;
        // for(j = 0; cs[j] != 0; j++){
        //     if(ar1[i] != cs[j]) continue;
        //     else {
        //         flag = 1;
        //         // printf("%d ", ar1[i]);
        //         fr[j]++;
        //         break;
        //     }
        // }
        // if(flag) continue;
        // cs[j] = ar1[i];
        // fr[j]++;
    // }


    // int cnt0 = 0;
    // int cnt1 = 0;
    // for(int i = 0; i < n; i++){
    //     if(ar1[i] == 0) cnt0++;
    //     else if(ar1[i] == 0) cnt0++;
    // }
    
    
    // printf("%d\n", cnt0);
    // printf("%d\n", cnt1);
    //...

    // for(int i = 0; i < n; i++){ // I sort array
    //     for(int j = i + 1; j < n; j++){
    //         if(ar1[i] > ar1[j]){
    //             int tmp = ar1[i];
    //             ar1[i] = ar1[j];
    //             ar1[j] = tmp;
    //         }
    //     }
    // }
    
    // for(int i = 0; i < n; i++){
    //     printf("%d ", ar1[i]);
    // }
    // for(int i = 1; i <= max; i++){
    //     int r = 0;
    //     for(int j = 0; j < n; j++){
    //         // if(ar1[j] < i) break;
    //         if(ar1[j] == i) r++;
    //     }
    //     printf("%d\n", r);
    // }

