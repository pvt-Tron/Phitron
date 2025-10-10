#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;           // type 1
    // vector<int> v(5);        // type 2
    // vector<int> v(5,10);     // type 3
    // vector<int> v2(5,100);   // type 4
    // vector<int> v(v2);       // type 4
    // vector<int> v(a, a + 6); // type 5
    
    // int a[6] = {1,2,3,4,5,6};
    // vector<int> v(a, a + 6);

    // int n = sizeof(a) / sizeof(int);
    // int n = sizeof(a) / sizeof(a[0]);
    // vector<int> v(a, a + n);

    vector<int> v = {2,10,3};
    
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    // v.clear();
    cout << v.capacity() << endl;
    v.push_back(20);
    v.push_back(30);
    cout << v.capacity() << endl;


    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << v[4] << endl;
    
    v.clear();
    cout << v.size() << endl;
    
    return 0;
}