#include<stdio.h>
int main()
{
    //float f(int);
    //float d;

    float x;
    float y;
    float a;
    float b;
    float c=0;
    float d=0;
    float e=0;

    //int d;
    scanf("%d",&x);
    scanf("%d",&y);
    
    a=x;
    b=y;

    c=a+b;
    d=a*b;
    e=a/b;
    
    printf("%f" ,c);
    printf(" somma\n");
    printf("%f" ,d);
    printf(" moltiplicazione\n");
    printf("%0.1f" ,e);
    printf(" divisiobe\n");
    //d = f(c);

    return 0;

    //printf("%0.1f" ,d);
    //printf("%f + %f = %f", a, b, c);
    //printf("");
    //printf("f",b);
    //printf("  ");
    //printf("%f",mod);
    //dvd=b*1.0/a;
    //scanf("%da %db",&a,&b);
    //printf("%d %d",&a,&b);
    //printf("",a);
}