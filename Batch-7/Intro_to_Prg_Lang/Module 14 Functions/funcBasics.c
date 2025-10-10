#include<stdio.h>
#include<math.h>
/*  Pre-declaration; can put function also after main
return_type fun_name(parameter(s)); */

/* Functions structure.
return_type fun_name(parameter(s)){ // {scope}
    |<--indent
    // body //

    return retun_type;
}
int main(){
    fun_name(argument(s)); // call
}*/

void func1(){
    printf(".\n");
}
void func2(int x){
    printf("%d\n", x);
}
int func3(){
    int n = 0;
    n++;
    return n;
}
int func4(int x){
    int k = x * 2;
    return k + 1;
}
//  Pre-declaration can put function also after main
int sum1(int a, int b);
int sum2();

int main()
{
    int x = 10;
    int y = 15;
    func1();
    func2(x);
    int res; 
    res = func3();
    printf("%d\n", res);
    res = func4(x);
    printf("%d\n", res);
    //--
    printf("%d\n", sum1(x, y));
    int a, b;
    int ans = 0;
    scanf("%d %d", &a, &b);
    ans = sum1(a,b);  // int int
    printf("%d\n", ans);
    ans = sum2();    // int void 
    printf("%d\n", ans);
    sum3();         // void void

    // Build-in Math Functions Required >> #include<math.h>
    
    float flans;
    // flans = floor(39);
    flans = ceil(4.5);
    // flans = abs(-39);
    // flans = round(4.3);
    // flans = pow(5);
    // flans = sqrt(25);
    printf("%f\n", flans);

    return 0;
}

int sum1(int a, int b){
    return a + b;
}
int sum2(){
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
void sum3(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
}