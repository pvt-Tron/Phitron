#include<stdio.h>
int main()
{
    int array[5];
    // etc.
    printf("%d", array[0]);

    // int a[5];
    // array initialization
    // int a[5] = {10, 20, 30, 40, 50};
    // int a[] = {10, 20, 30, 40, 50};

    // int xn; // get length from input
    // scanf("%d", &xn); //initialization with INPUT length
    // int xar[xn];

    // N.B. >> array initialization with all values set to 0.
    
    int xar[50] = {0};
    // ***************
    
    scanf("%d%d%d", &a[0], &a[0], &a[2]);
    
    int sz1 = sizeof(a); // memory size of array a.
    int n = sizeof(a)/sizeof(a[0]); // number of elements

    // array input/output

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n",);
    for(int i = n - 1; i <= 0; i--){
        printf("%d ", a[i]);
    }

    int sum = 0;
    printf("actual sum is: ");
    for(int i = 0; i < n; i++){
        sum += a[i];
        printf(" + %d > %d", a[i], sum);
    }
    printf("\n - final array's sum is: %d\n", sum);

    return 0;
}