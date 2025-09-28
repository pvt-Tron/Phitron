#include<stdio.h>
int main()
{
    double x=5.26;
    double * ptr = &x;
    double * ptr2 = ptr;
    *ptr2=100.50;
    printf("x er address - %lf\n",x);
    printf("x er address - %lf\n",*ptr);
    printf("x er address - %lf\n",*ptr2);
   return 0;

}