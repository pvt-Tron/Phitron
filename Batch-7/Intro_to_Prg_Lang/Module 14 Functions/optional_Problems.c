#include<stdio.h>
#include<math.h>
#include<limits.h>
void func1(){
    int x;
    x = 5; // scanf("%d", &x);
    if(x&2 == 0) printf("Even\n");
    else printf("Odd\n");
    
}
void func2(int x){
    if(x&2 == 0) printf("Even\n");
    else printf("Odd\n");
}
int func3(){
    int x;
    x = 5; // scanf("%d", &x);
    if(x&2 == 0) return 1;
    return 0;
}
int func4(int x){
    if(x&2 == 0) return 1;
    return 0;
}

int main()
{
    int x;
    x = 5; // scanf("%d", &x);
    func1();
    func2(x);
    x = func3();
    if(x == 1) printf("Even\n");
    else printf("Odd\n");
    x = 6;
    x = func4(x);
    if(x == 1) printf("Even\n");
    else printf("Odd\n");
    float flans;
    flans = floor(39);
    printf("%f\n", flans);
    flans = ceil(4.5);
    printf("%f\n", flans);
    int a = abs(-39);
    printf("%d", a);
    flans = round(4.3);
    printf("%f\n", flans);
    flans = pow(5, 2);
    printf("%f\n", flans);
    flans = sqrt(25);
    printf("%f\n", flans);

    return 0;
}