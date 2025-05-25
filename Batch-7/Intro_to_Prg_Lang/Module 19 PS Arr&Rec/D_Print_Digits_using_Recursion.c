#include<stdio.h>
void prtRec(long int num){
    if(num <= 0) return;
    prtRec(num/10);
    printf("%d ", num%10);
}
int main()
{
    int t;
    scanf("%d", &t);
    long int number;
    for(int i = 0; i < t; i++){
        scanf("%d", &number);
        if(number == 0){
            printf("%d\n", number);
            continue;
        }
        prtRec(number);
        printf("\n");
    }

    return 0;
}