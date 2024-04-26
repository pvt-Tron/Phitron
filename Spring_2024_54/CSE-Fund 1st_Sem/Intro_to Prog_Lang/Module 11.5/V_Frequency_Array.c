#include<stdio.h>
int main()
{
    //'A' = '0' * 2 + 1 - 32 ==>> 'A' = '0'(48) * 2 + 1 - 32(= 'a' - 'A')  
    int n1, n2;
    scanf("%d %d ", &n1, &n2);
    int num1;
    //char num1;
    int res1[n2];
    //int pos1;
    for(int j = 0; j < n2; j++){
        res1[j] = 0;
    }
    for(int i = 0; i < n1; i++){
        scanf("%d ", &num1);
        res1[num1 - 1]++;
    }    
        // //if(num1 > 47 && num1 < 58){
        // for(int j = 1; j <= n2;j++){
        //     // pos1 = (int) (num1 - '0');
        //     if(num1 == j){
        //         res1[num1 - 1]++;
        //     }
        // }    
        // }
        // }
    for(int j = 0; j < n2;j++){
    printf("%d", res1[j]);
    if(j < n2 - 1){printf("\n");}
}

    return 0;
}