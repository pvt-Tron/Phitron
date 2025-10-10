#include<stdio.h>
void minmax1(int *arr1, int n2){
    int a,b,c;
    if(arr1[0] < arr1[1] && arr1[0] < arr1[2]){
        a = arr1[0];
            if(arr1[1] < arr1[2]){
                b = arr1[1];
                c = arr1[2];
            }
            else{
                b = arr1[2];
                c = arr1[1];
            }
        }
    else if(arr1[0] > arr1[1] && arr1[0] > arr1[2]){
            c = arr1[0];
            if(arr1[1] < arr1[2]){
                a = arr1[1];
                b = arr1[2];
            }
            else{
                a = arr1[2];
                b = arr1[1];
            }
        }
    else{
        if(arr1[0] < arr1[1]){
            a = arr1[2];
            b = arr1[0];
            c = arr1[1];
        }
        else{
            a = arr1[1];
            b = arr1[0];
            c = arr1[2];
        }
    }
    printf("%d\n%d\n%d\n\n",a ,b, c);
    for(int i = 0; i < n2; i++){
        printf("%d", arr1[i]);
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