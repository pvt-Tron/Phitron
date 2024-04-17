#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    // printf("0th index er address - %p\n",&ar[0]);
    // printf("0th index er address - %p\n",&ar);
    // printf("0th index er value - %d\n",ar[0]);
    // printf("0th index er value - %d\n",*ar);
    // printf("0th index er value - %d\n",ar[1]);
    // printf("0th index er value - %d\n",*(ar+1));
    // printf("%d\n",*(2+ar));

    // ar[1] -> *(ar+1)
    // *(ar+1) -> ar[1]
    // *(1+ar) -> ar[1] / 1[ar]

    printf("%d",*(ar+1));
    printf("%d",*(1+ar));
    printf("%d",ar[1]);
    printf("%d",1[ar]);

    return 0;
}