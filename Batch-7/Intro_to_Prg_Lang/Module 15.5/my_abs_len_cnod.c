#include<stdio.h>
#include<string.h>

void swpxy(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int cnod(int *ar, int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(ar[i]%2 != 0) res++;
    }
    return res;
}
void last(int *ar, int n){
    int i = n - 1;
    ar[i] = 100;
}

int my_abs(int a){
    if(a < 0) a *= -1;
    return a;
}
int my_len(char *s){
    int res = strlen(s);
    return res;
}
int main()       //   the sequence is equal 
                //    anyway input at eof also saved in input.txt
{                   // found this https://coderanch.com/forums/pie/list
    int a;
    scanf("%d", &a);
    int res = my_abs(a);
    printf("%d\n", res);
    char s[20];
    scanf("%s", &s);
    res = my_len(s);
    printf("%d\n", res);
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    res = cnod(ar, n);
    printf("%d\n", res);
    int n1;
    scanf("%d", &n1);
    int ar1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%d", &ar1[i]);
    }
    last(ar1, n1);
    // printf("\n");
    for(int i = 0; i < n1; i++){
        printf("%d ", ar1[i]);
    }
    printf("\n");
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d %d\n", x, y);
    swpxy(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}

/* Inputs

-5
fsagsdf
8
8 7 5 0 1 4 6 9
5
10 20 30 40 50
8 2

*/