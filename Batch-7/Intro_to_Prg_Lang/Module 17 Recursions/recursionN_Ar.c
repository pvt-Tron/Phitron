#include<stdio.h>
void printN(int n, int i){
    if(i > n) // <<<< "Base Case"
    {
        return;
    } 
    printf("%d ", i); // this pos. increment
    printN(n, i + 1); // in/de.crement  
    printf("%d ", i); // this pos. decrement
}
void printAR(int *ar, int n, int i){
    if(i >= n) return;
    printf("%d ", ar[i]);
    printAR(ar, n, i + 1);
    /*?  ^^^^^^^^ = > return printAR(ar,n,i+1); (as is void ?) */
};
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    ar[0] = 1;
    for(int i = 2; i < n; i++){
        ar[i] = (ar[i - 1] * i + ar[i]); //(ar[i - 1] / 2));
    }
    printAR(ar, n, 0);  // initialization (call)
    printf("\n");
    printN(n, 1);       // initialization (call)
    
    return 0;
} // for (initaliz. ; condition(base case) ; in/de.crem.)