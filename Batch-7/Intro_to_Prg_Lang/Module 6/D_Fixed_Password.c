#include<stdio.h>
int main()
{
    // int arr[] = {1, 2}; // corretta inizializzazione
    // printf("%d", arr[1]);
    int num = 0;
    while(scanf("%d", &num)){
    // for( ; scanf("%d", &num); ){ //  for( ; scanf("%d", &num); ) NEW!!!
    // while(scanf("%d", &num) != EOF){
        if(num == 1999){
            printf("Correct\n");
            break;
        }
        else printf("Wrong\n");
    }


    return 0;
}