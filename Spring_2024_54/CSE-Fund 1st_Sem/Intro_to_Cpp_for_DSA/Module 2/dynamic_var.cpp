#include <bits/stdc++.h>
using namespace std;

int *fun(int x)
{
    int *a = new int;
    cout << "fun: " << a << endl;
    *a = 100;
    return a;
}

int main()
{
    int x = 10;
    int* p = fun(x);
    cout << "main: " << *p << endl;
    delete p;
    // int *a = new int;
    // *a = 100;
    // cout << *a << endl;

    // float *f = new float;
    // *f = 1.5315;
    // cout << *f << endl;
    // int *res1;
    // *res1 = fun();
    // cout << *res1 << endl;

    return 0;
}