#include<bits/stdc++.h>
using namespace std;
int *p;
void arPrnt(int* ar, int n){
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << "!!!" << endl;
    cout << "X"; //        ?????   !!!!!
    cout << "-";
    return;
}
void func(){
    int x = 20;
    p = &x;
    cout << "func -> " << *p << endl;
    int *y = new(int);
    *y = 10;
    p = y;
    cout << "func -> " << *p << endl;
    return;
}
int* arfunc(int n){
    // int a[5];
    int *ar = new int(n);  // initialize dynamic array ar
    // int cn = 0;
    // while(cin >> ar[cn]) cn += 1;
    for (int i = 0; i < n; i++) cin >> ar[i];
    arPrnt(ar, n);
    cout << "func last ar -> " << ar[n-1] << endl;
    return ar;
}
int* arResize(int* aro, int arn, int n){ // arn = n_new_nums_to_add
    int *ar = new int(n + arn);  // ini new size dynamic array ar 
    for (int i = 0; i < n; i++) ar[i] = aro[i];
    cout << ". ";
    arPrnt(ar, n);
    for (int i = n - 1; i < arn + n; i++) cin >> ar[i];
    arPrnt(ar, arn+n);
    cout << "funcRz last ar -> " << ar[arn + n - 1] << endl;
    return ar;
}
int main()
{
    // Dynamic Variable -=>> data_type var = new(data_type);// or new data_type;
    int *xdy = new int;  // initialize dynamic xdy
    int *xdz = new(int); // initialize dynamic xdz
    *xdz = 20;
    cout << *xdy << " " << *xdz << endl;
    delete(xdz);         // delete xdz
    delete(xdy);         // delete xdy
    cout << *xdy << " " << *xdz << endl;
    
    // int x = 10;
    // int *ptr = &x; // a pointer to x
    func();
    cout << "main -> " << *p << endl;
    int n = 5;
    int *ar = new int(n); // dynamic array sized n = 5
    ar = arfunc(n);
    // Dynamic Array -=>> data_type array = new(data_type[]);// or new data_type[];
    // int *ar = new int(5);  // initialize dynamic array ar
    // int cn = 0;
    // while(cin >> ar[cn]) cn += 1;
    cout << "in main : " << "ar -> " << ar[n - 1] << endl;
    arPrnt(ar, n);
    int arn = 2;
    cout << arn << "> ";
    int *ar2 = new int(n + arn);
    ar2[0] = -1;
    cout << ar2[0] << "< ";
    // ar2 = ar;
    // arPrnt(ar2, n);
    // cout << "in main:" << "ar2 -> " << ar[n - 1] << endl;
    // delete(ar);
    // ar = new int(n + arn);
    ar2 = arResize(ar, arn, n);
    // delete(ar2);
    cout << "in main : " << "ar -> " << ar2[arn + n - 1] << endl;
    arPrnt(ar2, n+arn);
    delete [] ar;
    delete [] ar2;
    // ar = new int(n + arn);
    // increese size of dynamic array ar

    return 0;
}