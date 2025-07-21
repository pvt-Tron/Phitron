#include<bits/stdc++.h>
using namespace std;

//               functions

int main()
{   // list<int> lst1;           //           initialize
    // list<int> lst1(10,3);               // constructors
    // list<int> lst1 = {1,2,3,4,5};
    vector<int> v1 = {1,2,3,4,5};   
    list<int> lst1(v1.begin(), v1.end());
    list<int> lst2(lst1.begin(), lst1.end());
    cout << lst2.size() << endl;
    lst2.clear();                        // .clear()
    cout << lst2.size() << endl;
    list<int> lst2(lst1.begin(), lst1.end());
    lst2.resize(5,100);                  // .resize(new size, [deflt.value]) 
    // build-ins modifiers
    // lst1 = lst2; <-----  lst2.assign(lst1.begin(), lst1.end());  <-------
    // .push_front .push_back .pop_front .pop_back <--- some: vectors/strings
    // `next` Word
    cout << *next(lst1.begin(), 2); // *next(start, position)
    // insert value at position O(N) with next:
    lst1.insert(next(lst1.begin(), 2), 100); // (next(start, position), value)
    // insert vector v1 at position O(N) with next:
    // (next(start, position), v.begin(), v.end())
    lst1.insert(next(lst1.begin(), 2), v1.begin(), v1.end()); 
    replace(lst1.begin(), lst1.end(), 20, 100); // (start, end, replaced, replacer)
    // Find: using `auto` Word
    auto it = find(lst1.begin(), lst1.end(), 200);
    // Sort:
    lst1.sort();
    lst1.sort(greater<int>());
    // Unique:
    lst2.unique(); // remove duplicates

    // STL List's loops
    for(auto it = lst1.begin(); it != lst1.end(); it++) cout << *it << " ";
    for(int val : lst1) cout << val << " ";
    
    // values access next *next (see also above)
    cout << *next(lst1.begin(), 2); // *next(start, position)
    // using begin() address
    cout << *lst1.begin() << " ";
    // .front .back
    cout << lst1.front() << " ";
    cout << lst1.back() << " ";

    cout << endl; 

    return 0;
}