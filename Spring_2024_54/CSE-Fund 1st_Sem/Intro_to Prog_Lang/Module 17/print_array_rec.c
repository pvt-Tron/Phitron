#include<stdio.h>

void func1(int arr2[],int n,int i){
    
    if(i == n){return;}
    printf("%d\n", arr2[i]);
    func1(arr2, n, i + 1);

}

// void func(){
//     prinf("Fun\n");
    // func(); Call the Stack in infinite Loop >> Stack OverFlow
// }

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    func1(arr1, n, 0);
    return 0;
}