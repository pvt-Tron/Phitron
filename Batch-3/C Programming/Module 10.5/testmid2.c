#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double m1;
    double m2;
    double d;  
    
    scanf("%lf %lf %lf",&m1,&m2,&d);
    double x = (d * m1);
    printf("%.4lf\n",x);
    double result = (x / m2);
    printf("%.0lf",result);

    return 0;
}