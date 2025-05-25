//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include<stdio.h>
long long int FactRec(long long int num, int st){
    if(st > num) return 1;
    return (FactRec(num, st + 1) * st);
}
int main()
{
    int number;
    scanf("%d", &number);
    if(number == 1) printf("1");
    else printf("%lld", FactRec(number, 1));

    return 0;
}