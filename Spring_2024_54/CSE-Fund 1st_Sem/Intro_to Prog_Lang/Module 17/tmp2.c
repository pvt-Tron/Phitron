#include<stdio.h>

int func1(int i){
    //int res1;
    if(i == 6) {  // Base Case
        //res1 = i;
        printf("\nEnd1");
        return 0;
    }
        
    printf("%d ", i);
    
    int res1 = func1(i + 1);
    
    // printf("\nEnd1");
    return (res1 + 1);
}

int main()
{
    printf("\n%d", func1(1));
    return 0;
}
