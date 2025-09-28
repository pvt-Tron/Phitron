#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float m1;
    float m2;
    float daysM1;
    
    scanf("%f%f%f",&m1,&m2,&daysM1);
    printf("%f %f %f\n",m1,m2,daysM1);
    float workerPower = daysM1 / m1;
    printf("%f\n",workerPower);
    float daysM2 = workerPower * m2;
    printf("%f %f\n",workerPower,daysM2);
    float daysMore= daysM1 - daysM2;
    printf("%f %f\n",workerPower,daysMore);
    float result1=daysMore / m2;
    printf("%f %f\n",workerPower,result1);
    daysM2=daysM2 * m2;
    printf("%f %f\n",workerPower,daysM2);
    
    
    
    printf("%.0f",daysM2);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}