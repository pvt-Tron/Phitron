#include<stdio.h>
int main()
{
    int n, num1, num2;
    scanf("%d", &n);
    int arr1[n];
    //printf("0\n");
    for(int i = 0; i < n; i++){
        scanf("%d\n", &arr1[i]);
    }
    //printf("1\n");
    for(int i = 0; i < n; i++){
        num1 = arr1[i];
        //printf("2\n");
        while(i < n + 1){
            //printf("3\n");
            num2 = num1%10;
            if(num1%10 == 0){printf("0 ");}
            else{
                printf("%d ", num2);
            }
            num1 = num1 / 10;
            if (num1 == 0){break;}
        }
        if(i == n - 1){break;}
        else{
            printf("\n");
        }
    }
    
    return 0;
}