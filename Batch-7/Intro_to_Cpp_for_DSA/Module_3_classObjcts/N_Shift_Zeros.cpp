    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        if(n == 1){
            scanf("%d", &n);
            printf("%d", n);
            return 0;
        }
        int ar[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &ar[i]);
        }
        // int k;
        // int flag = 1;
            //     if(flag){
            //         k = i;
            //         flag = 0;
            //     }
        int non0cnt = 0;
        for(int i = 0; i < n; i++){
            if(ar[i] != 0) non0cnt++;
        }
        int nz = 0;
        int i = 0;
        while(nz < non0cnt){
            while(i < n){
                if(nz >= non0cnt) break;
                if(i >= n - 1){
                    nz = 0;
                    break;
                }
                else if(ar[i] != 0){
                    nz+=1;
                    i+=1;
                    // printf("%d ", nz);
                    continue;
                }
                else {
                    nz = 0;
                }
                int j = i + 1;
                if(ar[j] != 0){
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                    i+=1;
                    continue;
                }
                while(ar[j] == 0){
                    j += 1;
                    if(j == n) break;
                    if(ar[j] == 0) continue;
                    // printf("%d,", ar[i]);
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                }                
                i+=1;
            }
            i = 0;
        }
        
        // for(int i = 0; i < n - 1; i++){
        //     if(i != 0) continue;
        //     for(int j = i + 1; j < n; j++){
        //         if(ar[j] != 0){
        //             printf("%d,", ar[j]);
        //             int tmp = ar[i];
        //             ar[i] = ar[j];
        //             ar[j] = tmp;
        //             i++;
        //         }
        //     }
        // }
        for(int i = 0; i < n; i++){
            printf("%d ", ar[i]);
        }
        
    }