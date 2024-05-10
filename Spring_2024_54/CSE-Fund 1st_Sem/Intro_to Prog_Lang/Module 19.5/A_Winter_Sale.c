#include<stdio.h>
float fullPrice(float disc2, float dprice2){
    return (dprice2 / (100 - disc2)) * 100;
}
int main()
{
    float disc1, dprice1, price1;
    scanf("%f %f", &disc1, &dprice1);
    price1 = fullPrice(disc1, dprice1);
    printf("%.2f", price1);

    
    return 0;
}