#include<stdio.h>
#include<string.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    //char arrc1[n1];
    char arrc1;
    int asc1 = 0;
    int report1;
    int result1 = 0;
    for(int i = 0; i <= n1; i++){
        scanf("%c", &arrc1);
        asc1 = (int) arrc1;
        if(i == 0){continue;}
        //printf("%d ", asc1);
        asc1 = asc1 - 48;
        //printf("%d ", asc1); 
        result1 = result1 + asc1;
        asc1 = 0;
        //scanf("%c", &arrc1[i]);
    }
    // //printf("%s ", arrc1);
    // for(int i = 0; i <= n1; i++){
    //     if(arrc1[i] == 48){continue;}
    //     else{
    //         printf("%c ", arrc1[i]);
    //         result1 += arrc1[i] - 38;
    //         //printf("%d ", result1);        
    //     }
    // }
    printf("%d", result1);
    // + (arrc1[0] * (-1)));
    return 0;
}