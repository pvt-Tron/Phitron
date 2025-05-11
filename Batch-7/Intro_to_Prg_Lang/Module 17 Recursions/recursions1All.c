#include<stdio.h>

void printUP2(int n);
void printDN(int n);
void printI_N(int n, int i);
void printAR(int *ar, int n, int i);
void printUP(int n){
    printf(":");
    printUP2(n);
    printf(" %d,", n);
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    ar[0] = 1;
    for(int i = 2; i < n; i++){
        ar[i] = (ar[i - 1] * i + ar[i]); //(ar[i - 1] / 2));
    }
    printAR(ar, n, 0);
    printf("\n");
    printUP(n); // -----------
    //--------- why there is a /n without > printf("\n");
    printDN(n);
    printf("\n");
    printI_N(n, 15);
    printf("\n 2nd call : ");
    int s2 = 3;
    printAR(ar, n, s2);
    printf("start from: %d\n", s2);

    return 0;
}

void printUP2(int n){
    if(n > 15) return;
    printf("%d", n);
    printUP(n + 1);
}
void printI_N(int n, int i){
    if(i < n) return;
    printf("%d ", i);
    // printDN(n - 1);         // as is void:
    return printI_N(n, i - 1); // printDN(n - 1); = return printDN(n - 1);
}
void printDN(int n){
    if(n > 0) return;
    printf("%d ", n);
    // printDN(n - 1);         // as is void:
    return printDN(n - 1); // printDN(n - 1); = return printDN(n - 1);
}
void printAR(int *ar, int n, int i){
    if(i >= n) return;
    printf("%d ", ar[i]);
    return printAR(ar, n, i + 1);
    // printf("%d ", ar[i]);
};