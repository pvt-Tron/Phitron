#include<stdio.h>

int cntg1 = 1;
int fend1(){
    if(cntg1 < 2){
        printf("\nEnd1");
        cntg1++;
    }
    return 0;
}
void func1(int i){
    
    if(i == 6) return; // Base Case
    printf("%d ", i);
    func1(i + 1);
    fend1();
}


int main()
{
    func1(1); // *
    return 0;
}