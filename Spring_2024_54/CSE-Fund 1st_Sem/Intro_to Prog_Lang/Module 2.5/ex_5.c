#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    if(n >= 5000){
        if(n >= 10000){
            printf("Gucci Bag");
        }
            if(n > 20000){
                printf("\nGucci Belt");
            }
        else{printf("Levis Bag");}
    }
    else{printf("Something");}
   
    
    return 0;
}