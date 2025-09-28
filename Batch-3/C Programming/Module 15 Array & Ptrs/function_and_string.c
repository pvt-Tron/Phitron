#include<stdio.h>
#include<string.h>

void fun2(char,int);
// void fun(char ar[])
void fun(char[]);

int main()
{
    char ar[20]="Hello";
    // fun(ar);
    printf("%s ",ar);
    fun(ar);
    return 0;
}

void fun(char *ar)
{
    // int sz=sizeof(ar)/sizeof(char);
    // printf("%d",sz);
    char n[] = "World!";
    
    printf("%s\nlen %d + World!\n",n,strlen(ar));
    // return n;
}
