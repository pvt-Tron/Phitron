#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    if(n >= 0){
        if(n == 0){
            printf("zero");
        }
        else if(n > 0){
                printf("positive");
            }
    }
    else{printf("negative");}
   
    
    return 0;
}