#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

 #define lli long long int
 #define max_size 100000
lli func1(lli arr2[], int n1, int idx, lli sum1){
    if(idx == n1) return 0;
    lli s = func1(arr2, n1, idx + 1, sum1);
    return s + arr2[idx];
}

int main()
{
    int nx;
    lli sum, result;
    scanf("%d", &nx);
    lli arr1[nx];
    for(int i = 0; i < nx; i++){
        scanf("%lld", &arr1[i]);
    }
    if(nx == 1){printf("%lld", arr1[0]);}
    //else if(nx == 2){printf("%ld", arr1[0] + arr1[1]);}
    else{
        result = func1(arr1,nx,0,sum);
        printf("%lld", result);
    }
    return 0;
}





// long int func1(long int arr2[], int n1){
//     if(n1 <= 0){
//         //printf("%ld", arr2[n1 - 1]);
//         return 0;
//         // return arr2[n1 - 1];
//         }
//         return (func1(arr2, n1 - 1) + arr2[n1 - 1]);
    
//     // arr2[idx + 1] += arr2[idx];
//     // func1(arr2, n1, idx + 1);
// }


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<ctype.h>
// #include<stdlib.h>
// #include<stdbool.h>
// #define lli long long int
// #define max_size 100000
// lli Print(lli ar[],int n,int l,lli sum)
// {
// if(n==l) return sum;
// sum+=ar[l];
// Print(ar,n,l+1,sum);
// }
// int main()
// {
// int n,l=0;
// scanf("%d",&n);
// lli ar[n],sum=0;
// for(int i=0;i<n;i++)
// scanf("%lld",&ar[i]);
// printf("%lld\n",Print(ar,n,l,sum));
// return 0;
// }