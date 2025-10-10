#include<stdio.h>

int func1(int i){
    
    if(i == 6) {  // Base Case
        printf("\nEnd1");
        return i;
    }
        
    printf("%d ", i);
    func1(i + 1);
    // printf("\nEnd1");
   //return i;
    
}

int main()
{
    printf("\n%d", func1(1));
    return 0;
}



// #include<stdio.h>

// void func1(int i){
    
//     if(i == 6) {  // Base Case
//         //printf("\nEnd1");
//         return;
//     }
        
//     printf("%d ", i);
//     func1(i + 1);
//     printf("\nEnd1");

// }

// int main()
// {
//     func1(1);
//     return 0;
// }
// #include<stdio.h>

// // void func2(int i2){     // Experimenral
// //     int x2 = 1;
// //     if(i2 == 0) return; // Base Case
// //     printf("%d ", i2);
// //     func2(i2 - 1);
// //     //x2 = 1;
// //     printf("\nEnd2 %d", i2);
// //     if(x2) return;
// // }
// void func1(int i){

//     if(i == 6) return; // Base Case
//     printf("%d ", i);
//     func1(i + 1);
//     //const int x = i - 1;      // Exp.
//     // func2(x);                // Exp.
//     printf("\nEnd1");
//     // if(x == i - 1){return;}  // Exp.
//  }
// int main()
// {
//     func1(1);
//     return 0;
// }
