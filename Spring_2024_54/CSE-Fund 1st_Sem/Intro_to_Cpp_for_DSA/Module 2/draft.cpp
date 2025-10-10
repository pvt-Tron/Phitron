#include<bits/stdc++.h>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{   
    int x;
    cin >> x;
    cout << x << endl;
    int* x1 = new int;
    *x1 = x;
    cout << x << *x1 << endl;
    
    int *arr = new int[x];
    for(int i = 0; i < x; x++){
        cin >> *(arr + i);
    }
    for(int i = 0; i < x; x++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}