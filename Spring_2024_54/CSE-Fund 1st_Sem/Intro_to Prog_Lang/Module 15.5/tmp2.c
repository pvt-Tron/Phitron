#include<stdio.h>
#include<string.h>
#include<math.h>
void swap_it(int *a2, int *b2){
    int p;
    p = *a2;
    *a2 = *b2;
    *b2 = p;
}
void my_abs(int *p){
    int x = *p;
    if(x < 0){
        x = (x * (-1));
        *p = x;
        }
}
int my_len(char *arrc2, int x2){
    int x;
    for(int i = 0; arrc2[i] != '\0'; i++){
        x++;
    }
    return x;
}

int main()
{
    int a1,b1, c1; // swap a & b,  / my_abs(c1) 
    scanf("%d %d ", &a1, &b1);
    scanf("%d ", &c1);
    int *p;
    int sz = sizeof(*p) / sizeof(char);
    char d1[*p]; // d1 len > no strlen() /
    fgets(d1, 1001, stdin);
    swap_it(&a1,&b1);
    printf("%d %d\n", a1, b1);
    my_abs(&c1);
    printf("%d\n", c1);
    //my_len(d1, sz);

    return 0;
}