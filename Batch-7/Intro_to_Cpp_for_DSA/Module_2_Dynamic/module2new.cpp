#include <bits/stdc++.h>
using namespace std;

int* p; // global pointer

void arPrnt(int* ar, int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << "!!!" << endl;
    cout << "X";
    cout << "-" << endl;
}

void func() {
    int x = 20;
    p = &x; // p points to a local variable x (dangerous if x goes out of scope)
    cout << "func -> " << *p << endl;

    int* y = new int; // dynamically allocate memory
    *y = 10;
    p = y; // now p safely points to heap memory
    cout << "func -> " << *p << endl;

    // memory leak here unless you delete y
    // delete y; // add this if needed
}

int* arfunc(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int n = 5;
    int* ar = arfunc(n); // get array from function
    cout << "in main : ar[n-1] -> " << ar[n - 1] << endl;
    arPrnt(ar, n);

    int arn = 2;
    cout << arn << "> ";

    int* ar2 = new int[n + arn]; // new array of size n+arn
    ar2[0] = -1;
    cout << ar2[0] << "<" << endl;

    // cleanup memory
    delete[] ar;
    delete[] ar2;

    return 0;
}
