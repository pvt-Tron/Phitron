#include<stdio.h>
int main()
{
    char cn1[1000001];
    scanf("%s", &cn1);
    int n = strlen(cn1);
    int result1 = 0;
    
    for(int i = 0; i < n; i++){
        result1 += (cn1[i] - '0');
    }
    printf("%d", result1);
    return 0;
}