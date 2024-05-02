#include<stdio.h>
//#include<string.h>

int cnt_odd(int *arr2,int n2){
    int x = 0;
    //int sz = sizeof(*arr2) / sizeof(int);
    for(int i = 0; i < n2; i++){
        if(arr2[i]%2 != 0){x++;}
        //printf("%d ", arr2[i]);
        //else{x++;}
    }
    
    return x;
}

int main()
{
    int n1;
    scanf("%d", &n1);
    int e1[n1]; // d1 len > no strlen() /
    for(int i = 0; i < n1; i++){
        scanf("%d", &e1[i]);
    }
    int res1 = cnt_odd(e1, n1);
    printf("odd(s) = %d", res1);

    return 0;
}