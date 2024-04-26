#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int arr1[n];
    long int max1,min1,pos1 = 0,pos2 = 0;
    for(int i = 0; i < n; i++){
        scanf("%ld ", &arr1[i]);
        if(i == 0){max1 = arr1[0], min1 = arr1[0];}
        else{
            if(max1 < arr1[i]){
                max1 = arr1[i];
                pos1 = i;
                }
            if(min1 > arr1[i]){
                min1 = arr1[i];
                pos2 = i;
                }
        }
    }
    arr1[pos2] = max1;
    arr1[pos1] = min1;
    for(int i = 0; i < n; i++){
        printf("%ld", arr1[i]);
        if(i < n-1){printf(" ");}
    }

    return 0;
}