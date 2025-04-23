#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int k = 1;
    int ar[n+k];
    for(int i = 0; i < n ; i++){
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
    int pos, num;
    scanf("%d%d", &num, &pos);

    for(int i = 0; i < n ; i++){
        if(i == pos) {
            for(int j = n - 1; j > pos; j--){
                ar[i] = ar[i - 1];
            }
            ar[i] = num;
            break;
        }
    }
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    
    scanf("%d", &pos);

    for(int i = pos; i < n ; i++){
        ar[i] = ar[i + 1];
    }
    n--;
    printf("\n");
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    
    return 0;
}