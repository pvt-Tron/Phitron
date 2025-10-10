void printUP(int n){
    if(n > 5) return;
    printf("%d ", n);
    printUP(n + 1);
};