#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x = {10,20,30};
    // vector<int> v;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //     // cin >> v[i];
    // }

    // for(int val:v){
    //     cout << val << " ";
    // }
    
    int n1;
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    for(int val:v1){
        cout << val << " ";
    }
    
    cout << endl;
    cout << v1.size() << endl;
    return 0;
}