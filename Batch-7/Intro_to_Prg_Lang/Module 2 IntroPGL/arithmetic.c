#include<stdio.h>
int main()
{
    // input a = 10 then 12 b = 5
    // int a = 12;
    // float = 12;
    // int b = 5;
    // int a, b;
    float a;
    int b;
    scanf("%f %d", &a, &b);
    printf("a = %f b = %d\n", a , b);
    int sum = a + b;
    printf("summation = %d\n", sum);
    int sub = a - b;
    printf("subtraction = %d\n", sub);
    int mul = a * b;
    printf("Multiplication = %d\n", mul);
    int div1 = a / b;
    printf("division (int) = %d\n", div1);
    float div2 = a / b;
    // float div2 =(float)a / b;
    printf("division (float) = %f\n", div2);

    return 0;
}