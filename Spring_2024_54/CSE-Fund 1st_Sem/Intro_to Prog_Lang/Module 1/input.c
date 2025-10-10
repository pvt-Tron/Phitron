#include<stdio.h>
int main()
{
    
    int rahim, karim;
    char p,q;
    float chol;
    char ami;
    scanf("%d%c %d%c %f %c\n", &rahim, &p, &karim, &q, &chol, &ami);
    printf("%d%c %d%c\n", rahim, &p, karim, &q);
    printf("%0.2f\n", chol);
    printf("%c", ami);
    return 0;
    /**/
}
