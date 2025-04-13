#include<stdio.h>
/*  Exrta Pratice Problems 1.* 2.* 4.* (search in the page [*1.] [*2.] and [*4.])

    [*4] .Difference between Break and Continue

    Break immediate stop the loop and procseed with code out of loop
    Continue do not stop the loop but jump at start of next cycle not
    executing the code after itself in the cycle of the loop in which
    itself (continue) is activated.

*/
int main()
{
    // [*1.]
    int cr = 40;
    int n = 200;
    int i = 8;
    printf("Print %d time table to %d \n  ", i, n);
    while(1){
        
        if(i > cr){
            cr += 40;
            printf("\n");
            if(i < 100) printf(" ");
        }
        printf("%d ", i);
        i += 8;
        if(i < 100) printf(" ");
        if(i >= 200) break;
    }
    printf("\n");
    // [*2.]
    i = 100;
    n = 1;
    cr = 80;
    printf("Print odd numbers from i = %d and n = %d\n", i, n);
    do{
        if(i < cr){
            cr -= 20;
            printf("\n");
        }
        if(i%2 != 0) printf("%d ", i);
        i--;
    }while (i >= n);
    printf("\neof");
    

    return 0;
}