#include<stdio.h>
int* inpt(int *a, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    return a;
}
int* prnt(int *a, int n){
    for(int i = 0 ; i < n; i++){
        printf("%d ", *a + i);
    }
    return 0;
}
void fun_int(int nums[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", nums[i]);
    }
}

void fun_char(char str[]){ //, int n){
    printf("%s ", str);
    printf("%d ", strlen(str));
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    // inpt(&ar, n); // & in not necessary
    inpt(ar, n);
    prnt(ar, n);
    fun_int(ar, n);
    
    char str[101];
    scanf("%s", &str); // & in not necessary
    fun_char(str);

    printf("%p\n", &ar[0]);
    printf("%p\n", &ar[1]);
    printf("%p\n", &ar[2]);
    printf("%p\n", &ar[3]);
    printf("%p\n", &ar[4]);
    
    return 0;
}