#include<stdio.h>

void func1(int *arr2, int n){
    
    arr2[0] = 500;

}
void func2(char *arrc2){
    
    int szc1 = sizeof(arrc2) / sizeof(char);
    printf("%d\n", szc1);

}

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    char arrc1[] = "Hello";
    
    // >> size check
    int sz1 = sizeof(arr1) / sizeof(int);
    int szc1 = sizeof(arrc1) / sizeof(char);
    printf("%d %d\n", sz1, szc1);
    // >>
    
    func1(arr1, 5);
    func2(arrc1);

    for(int i = 0; i < 5; i++){

        printf("%d ", arr1[i]);
    }
    
    printf("\n%s", arrc1);

    return 0;
}