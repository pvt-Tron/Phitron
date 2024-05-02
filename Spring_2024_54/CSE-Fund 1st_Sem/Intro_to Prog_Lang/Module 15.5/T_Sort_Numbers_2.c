#include<stdio.h>
void minmax1(int *arr1, int n2){
    int i, tmp1;
    int arr2[3];
    for(i = 0; i < n2; i++){
        arr2[i] = arr1[i];
    }
    for(i = 0; i < n2 -1; i++){
        for(int j = 1; j < n2; j++){
            if(arr1[i] < arr1[j]){
                tmp1 = arr1[i];
                arr1[j] = arr1[i];
                arr1[j] = tmp1;
            }
        }
    }
    printf("%d\n%d\n%d\n\n",arr1[0] , arr1[1], arr1[2]);
    for(int i = 0; i < n2; i++){
        printf("%d", arr2[i]);
        if(i < n2 - 1){printf("\n");}
    }
}

int main()
{
    int n1 = 3;
    // scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%d ", &arr1[i]);
    }
    minmax1(arr1, n1);

    
    return 0;
}