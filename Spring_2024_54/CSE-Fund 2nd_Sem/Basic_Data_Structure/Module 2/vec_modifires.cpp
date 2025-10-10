#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x = {10,20,30};
    // vector<int> v = {1,2,3};
    
    // v = x; // O(N)
    // v.assign(vector int x);

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2 = {100,101,102,103,104};
    v1.pop_back();                                  // REMOVE LAST ELEMENT
    v1.insert(v1.begin() + 2, v2.begin(), v2.end()); // INSERT
    v1.erase(v1.begin() + 1);                        // REMOVE ELEMENTS
    v1.erase(v1.begin() + 3, v1.end() - 1);
    
    vector<int> v = {1,2,2,3,4,5,6,7,2,8,9,10,2};
    replace(v.begin(), v1.end(),2,100);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << v.size() << endl;
    return 0;
}