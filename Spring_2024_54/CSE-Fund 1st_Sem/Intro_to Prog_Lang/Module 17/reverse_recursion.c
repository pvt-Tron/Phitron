#include<stdio.h>

int func1(int i){
    
    if(i == 6) {return i;}  // Base Case
    func1(i + 1);
    printf("%d ", i); /* <<< after recurs. (call itself) reverse the output */
}

int main()
{
    func1(1);
    return 0;
}