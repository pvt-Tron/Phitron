#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[5];
    for(int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    for(int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 3; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a, b;
    //a = new int[5];
    return 0;
}