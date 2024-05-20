#include <bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
// #include<utility>
// #include<algorithm>
using namespace std;

int *fun()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{

    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    // int n1;
    // cin >> n1;
    // cout << n1 << ": ";
    // int *arr = new int[n1];
    // for(int i = 0; i < n1; i++){
    //     cin >> *(arr + i);
    // }
    // for(int i = 0; i < n1; i++){
    //     cout << *(arr + i) << " ";
    // }

    return 0;
}