/*                  Big O Time Complexity                 */
/*
   N = 1000

   Constant:     O(1)        -> 1
   Linear:       O(N)        -> 1000
   Logarithmic:  O(logN)     -> 10
   Square root:  O(sqrt(N))  -> 32
   Quadratic:    O(N*N)      -> 1000000
   Linearithmic: O(NlogN)    -> 10000
   
  - Forulas:
     - int sum = (n * (n + 1)) / 2; -> O(1)
  - Build-ins Functions
     - sort(a,a+n);                 -> O(NlogN)


*/
// ----------------------------------------------------------------

// #include<bits/stdc++.h> // 1) Constant O(1) 
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     // for(int i = 0; i < n/2; i += 1){ 
//     //     cout << i;
//     // }
//     int sum = (n * (n + 1)) / 2;  // using formula O(1);
    
//     return 0;
// }

// #include<bits/stdc++.h> // 2) Linear  // Big O 1) O(1), O(n) 
// using namespace std;
// int main()
// {
//     int n; // O(1) Big O 
    
//     cin >> n;  // O(1)
    
//     for(int i = 0; i < n/2; i += 1){ // for n > O(n), for n/2 > O(n/2) etc.
//         cout << i;
//     }
//     for(int i = 0; i < n; i += 1){ // for n > O(n)
//         cout << i;
//     }
//     for(int i = 0; i < n/2; i += 1){ // for n > O(n) + n > O(n) => O(2n) => O(n)!
//         cout << i;
//     } 

//     return 0; // O(1)
// } // here O(1) * 3 + O(n/2) + O(2N) ==-> = O(n)!


// #include<bits/stdc++.h> // 3) Logarithic O(logN)  Big O 
// using namespace std;
// int main()
// {
//     int n; // O(1) Big O 
    
//     cin >> n;  // O(1)
//     int k = 2;
//     for(int i = 0; i < n/2; i += 1){ // for In*2 > O(logN), for n/2 > O(n/2) etc.
//         cout << i * k; // O(log2N) ---> O(logk N)
//     }
//     /*  (2^i Ntimes) = 2^k   [ LOGa a = 1 ]
//         > 2^k = 1000, > log2 2^k >> [k = log2 1000] (= 10 [9.96]) 
//         [ oP = log2 N ] O(log2N) ---> O(logk N)
//     */

//     return 0;
// }

// #include<bits/stdc++.h> // 4) Square Root O(sqrtN) Big O
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n; // n = 10000
//     // for(int i = 1; i <= sqrt(n); i += 1){ // for sqrt(n) > O(sqrt(n))
//     //     if(n%i == 0)cout << i; // 
//     // }
//     for(int i = 1; i*i <= n; i += 1){ // for sqrt(n) > O(sqrt(n))
//         if(n%i == 0)cout << i; // 
//     }
//     return 0;
// }

// #include<bits/stdc++.h> // 5) Quadratic O(N_N) O(n^Xn) Big O
// using namespace std;
// int main()
// {
//     int n,m;
//     cin >> n >> m; // n = 4 m = 
//     int cnt = 0;
//     for(int i = 0; i < n; i += 1){  
//         for(int j = 0; j < n; j += 1){ // m
//             for(int z = 0; z < n; z += 1){
//                 cout << "Hello" << " "; //  = O(n*n*n) = O(n^Xn)
//                 cnt += 1;
//             }
//             cout << " y ";
//         }
//         cout << "cnt " << cnt << endl;
//     }
    
//     return 0;
// }

// #include<bits/stdc++.h> // 6) Linearithmic O(NlogN) Big O
// using namespace std;
// int main()
// {
//     int n,m;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 0; i < n; i += 1){  // O(N)
//         for(int j = 0; j < n; j *= 2){ 
            
//             cout << "Hello" << " "; //  = O(logN) , O(N) = O(NlogN) >>*
//             cnt += 1;              //   *>>  O(N*logN) = O(NlogN)
            
//             cout << " y ";
//         }
//         cout << "cnt " << cnt << endl;
//     }
    
//     return 0;
// }

//-----------------------------
// Extra Problems

// #include<bits/stdc++.h> 
// using namespace std;
// int main()
// {
// // problem 1 // O(n*n)
//  int i=0,sum = 0;
//     while(i<n)
//     {
//         int j=0;
//         while(j<n)
//         {
//             sum += j;
//             j+=2;
//         }
//         i++;
//     }

// // Problem 2: // O(n*n)
//     for(int i=0;i<n;i+=10)
//     {
//         for(int j=n;j>=0;j--)
//         {
//             cout << "Hello" << endl;
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout << "Hi" << endl;
//     }

// Problem 3: // O(N*sqrt(n))
//     for(int i=0;i<n;i++)
//     {
//         int j=0;
//         while(j*j<n)
//         {
//             i+j;
//             j++;
//         }
//     }
// }

// // Problem 4: // O(n*n*n)
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>=0;j--)
//         {
//             for(int k=1;k<=n;k++)
//             {
//                 sum += i+j+k;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             sum += i+j;
//         }
//     }

// }

// // Problem 5: // O(sqrt(n)
//     for(int i=0;i*i<n;i++)
//     {
//         sum += i;
//     }

//     for(int i=0;i<n;i++)
//     {
//         sum += i;
//         i*=k;
//     }
// }

// // Problem 6: // O(n*nlogn)
//     for(int i=0;i<n;i++)
//     {
//         cin >> a[i];
//     }
//     sort(a,a+n);
// }

// //Problem 7: // O(n)
//     for(int i=0;i<n;i++)
//     {
//         sort(a,a+n);
//     }
// }