#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Vector are Dynamic
    vector<int> v;
    vector<int> v(10);
    vector<int> v(10, -1);
    vector<int> v(a, a+5);

    */
    vector<int> v1 = {1, 2, 3, 4};
    for(int i = 0; i < v1.size(); i += 1) cout << v1[i];

    cout << v1.capacity() << endl;
    v1.push_back(1);
    cout<< v1[4] << " " << v1.capacity() << endl;
    v1.clear();
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;

    for(int i = 10; i <= 100; i += 1)
    {
        v1.push_back(i);
    }
    cout << v1.size() << endl;
    v1.erase(v1.begin() + 4, v1.begin() + 5);
    for(int i = 0; i < v1.size(); i += 1) cout << v1[i];
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    v1.resize(5);
    for(int i = 0; i < v1.size(); i += 1) cout << v1[i];
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    vector<int> v2;
    v2 = v1;
    v1.insert(v1.begin() + 4, 555);
    v1.pop_back();
    for(int i = 0; i < v1.size(); i += 1) cout << v1[i] << " " << v2[i];
    for(int x: v2) cout << x << " ";
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;


    return 0;
}