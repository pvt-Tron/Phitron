#include<stdio.h>
int main()
{
    int n1, n2;
    char w1, w2;
    scanf("%s\n%s", &w1, &w2);
    n1 = sizeof(w1);
    n2 = sizeof(w2);
    n1 += n2 + 1;
    char arrc1[n1];
    // int sz = sizeof(arrc1) / sizeof(char);
    int* cnt1 = 0;
    while(cnt1 < (n1 - n2)){
        arrc1[*cnt1] = w1[cnt1];
    }
    
    // while( != EOF){

    // }
    return 0;
}