
// void srt(int a, int b , int c){
//     int mx;
//     int md;
//     int mn; 
//     if(a == b){
//         if(a > c){
//             mx = a;
//             md = b;
//             mn = c; 
//         }
//         else{
//             mx = c;
//             md = b;
//             mn = a;
//         }
//     }
//     else if(a == c){
//         if(a > b){
//             mx = a;
//             md = c;
//             mn = b; 
//         }
//         else{
//             mx = b;
//             md = c;
//             mn = a;
//         }
//     }
//     else if(b == c){
//         if(b > a){
//             mx = b;
//             md = c;
//             mn = a; 
//         }
//         else{
//             mx = a;
//             md = c;
//             mn = b;
//         }
//     }
//     else{
//         mx = a;
//         md = a;
//         mn = a; 
//         if(b > mx) mx = b;
//         if(c > mx) mx = c;
//         if(b < mn) mn = b;
//         if(c < mn) mn = c;
//         if(b < mx && b > mn) md = b;
//         if(c < mx && c > mn) md = c; 
//         if(a < mx && a > mn) md = a;
//     }
//     printf("%d\n%d\n%d\n\n", mn, md , mx);
//     printf("%d\n%d\n%d\n", a, b , c);
// }
#include<stdio.h>
void srt(int a, int b , int c){
    int ndx[3];
    ndx[0] = a;
    ndx[1] = b;
    ndx[2] = c;
    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 3; j++){
            if(ndx[i] > ndx[j]){
                int tmp = ndx[i];
                ndx[i] = ndx[j];
                ndx[j] = tmp;
            }
        }        
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n", ndx[i]);
    }
    printf("\n%d\n%d\n%d\n", a, b , c);
    
}

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    srt(a, b, c);

    return 0;
}