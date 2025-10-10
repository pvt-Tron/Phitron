#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 2, 3, 4, 5, 6, 7, 2, 8, 9, 10, 2};
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 3); >>>>>>>>>> auto it = find(v.begin(), v.end(), 3);
    // cout << v[v.size-1];
    // cout << v.back();
    // cout << v[0];
    // cout << v.front();
    
    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }
    // auto it = find(v.begin(), v.end(), 3);
    // if(it==v.end()) cout << "Not found" << endl;
    // else cout << "Found" << endl;
    // replace(v.begin(), v1.end(), 2, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << v.size() << endl;
    return 0;
}