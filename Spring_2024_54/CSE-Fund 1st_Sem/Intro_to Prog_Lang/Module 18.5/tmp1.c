#include<stdio.h>

long int func1(long int arr2[], int n1){
    if(n1 <= 0){
        //printf("%ld", arr2[n1 - 1]);
        return 0;
        // return arr2[n1 - 1];
        }
        return (func1(arr2, n1 - 1) + arr2[n1 - 1]);
    
    // arr2[idx + 1] += arr2[idx];
    // func1(arr2, n1, idx + 1);
}

int main()
{
    int nx;
    scanf("%d", &nx);
    long int arr1[nx];
    for(int i = 0; i < nx; i++){
        scanf("%ld", &arr1[i]);
    }
    if(nx == 1){printf("%ld", arr1[0]);}
    //else if(nx == 2){printf("%ld", arr1[0] + arr1[1]);}
    else{
        int result = func1(arr1,nx);
        printf("%ld", result);
    }
    return 0;
}