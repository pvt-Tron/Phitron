#include<stdio.h>

void fun2(int,int);
// void fun(int ar[],int n)
// void fun(int * ar,int n)
void fun(double ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        // printf("%d ",ar[i]);
        printf("%0.2lf ",ar[i]);
    }
}

int main()
{
    double ar[5]={10,20,30,40,50};
    // int ar[5]={10,20,30,40,50};
    
    // printf("0th index er address - %p\n",&ar[0]);
    // printf("0th index er address - %p\n",&ar);
    // printf("0th index er value - %d\n",ar[0]);
    fun(ar,5);
    
return 0;

}