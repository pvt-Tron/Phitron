#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x = {10,20,30};
    // vector<int> v = {1,2,3};
    // v = x; // O(N)
    // v.assign(vector int x);

    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v2 = {100, 101, 102, 103, 104};
    vector<int> v = {1, 2, 2, 3, 4, 5, 6, 7, 2, 8, 9, 10, 2};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 3); >>>>>>>>>> auto it = find(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 3);
    cout << *it;
    if(it==v.end()) cout << "Not found" << endl;
    else cout << "Found" << endl;
    replace(v.begin(), v1.end(), 2, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << v.size() << endl;
    return 0;
}