#include<stdio.h>
#include<string.h>

int my_len(char *arrc2){
    int x = 0;
    int sz = sizeof(*arrc2) / sizeof(char);
    for(int i = 0; arrc2[i] != '\0'; i++){
        x++;
    }
    if(x){x--;}
    return x;
}

int main()
{
    char d1[1001]; // d1 len > no strlen() /

    fgets(d1, 1001, stdin);

    int res1 = my_len(d1);
    printf("%d", res1);

    return 0;
}