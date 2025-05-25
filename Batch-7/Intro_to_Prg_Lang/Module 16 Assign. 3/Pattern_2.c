#include<stdio.h>
void pattern2(int x){
    int spaces = x -1;
    for(int i = 1; i <= x; i++){
        int num1 = i;
        for(int j = 0; j < x; j++){
            if(j < spaces){
                printf(" ");
            }
            else{
                printf("%d", num1);
                num1--;
            } 
        }
        printf("\n");
        spaces--;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern2(n);
    
    return 0;
}