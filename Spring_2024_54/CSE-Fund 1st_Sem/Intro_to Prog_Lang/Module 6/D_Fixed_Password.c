#include<stdio.h>
int main()
{
    int i = 0;
    while(i != EOF){
        scanf("%d", &i);
        if(i == 1999){
            printf("Correct");
            break;
        }
        else{
        printf("Wrong\n");
        }
    }
    return 0;
}