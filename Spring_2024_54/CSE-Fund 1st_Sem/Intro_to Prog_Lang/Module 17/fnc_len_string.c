#include<stdio.h>

int func1(char arr2[], int i){
    
    if(arr2[i] == '\0'){return 0;} 
    int l = func1(arr2, i + 1);
    return l + 1;

}


int main()
{
    // int n;
    // scanf("%d", &n);
    // char arr1[n];
    // for(int i = 0; i < n; i++){
    //     //scanf("%d", &arr1[i]);
    // }
    char arr1[7] = "abcdef";
    int len1 = func1(arr1, 0);
    printf("%d", len1);
    return 0;
}