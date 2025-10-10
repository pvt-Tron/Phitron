#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> MyList;
    // list<int> list2 = {1, 2, 3, 4, 5};
    list<int> MyList = {10, 20, 30, 40, 50};
    // int a[5] = {15, 25, 35, 45, 55};
    vector<int> v = {60, 70, 80};
    // list<int> MyList(10, 5);
    // list<int> MyList(list2);
    // list<int> MyList(a, a+ 5);
    // list<int> MyList(v.begin(), v.end());
    // for(auto it = MyList.begin(); it != MyList.end(); it++) cout << *it << " ";
    // for(int val : MyList)  cout << val << " ";

    // Capacity
    // cout << MyList.size() << endl;
    // MyList.resize(7);
    // cout << MyList.size() << endl;

    // Modifiers
    // list<int> newlist;
    // newlist.assign(MyList.begin(), MyList.end());
    list<int> newlist = {101, 201, 301, 401, 501};
    MyList.push_back(100);
    MyList.push_front(100); // add 100 begin
    
    MyList.pop_back(); // pop last
    MyList.pop_front();

    // Insert [USE >>>>> next <<<<<<<]
    // MyList.insert(MyList.begin() + 2, 100);  // ERROR !!
    
    MyList.insert(next(MyList.begin(), 3), 100); // MyList.end()
    MyList.insert(next(MyList.begin(), 2), 100);
    MyList.insert(next(MyList.begin(), 10), 100);
    MyList.insert(next(MyList.begin(), 3), {100, 200, 300});
    MyList.insert(next(MyList.begin(), 2), newlist.begin(), newlist.end());
    MyList.insert(next(MyList.begin(), 4), v.begin(), v.end());
    for(int val : MyList)  cout << val << " ";
    cout << endl;

    // Delete >> erase [USE >>>>> next <<<<<<<]
    MyList.erase(next(MyList.begin(), 4));    
    MyList.erase(next(MyList.begin(), 2), next(MyList.begin(), 5));
    // MyList.erase(next(MyList.begin(), 3), {100, 200, 300});
    // MyList.erase(next(MyList.begin(), 4), v.begin(), v.end());
    // MyList.erase(next(MyList.begin(), 2), next(MyList.begin(), 5));

    // Replace [Do not USE next]
    replace(MyList.begin(), MyList.end(), 30, 100);
    replace(MyList.begin(), MyList.end(), 30, 100);

    // FIND
    auto it = find(MyList.begin(), MyList.end(), 40);

    if(it == MyList.end()) cout << "Not Found" << endl;
    else cout << "Found" << endl;

    // remove [Do not USE next]
    MyList.remove(10);

    // SORT [Do not USE next]
    sort(MyList.begin(), MyList.end());
    // sort(MyList.begin(), MyList.end(), greater<int>());
    MyList.sort();
    MyList.sort(greater<int>());

    // unique [Do not USE next]
    MyList.unique();

    // reverse [Do not USE next]
    MyList.reverse();
    
    // Elements access

    cout << MyList.front() << endl;
    cout << MyList.back() << endl;
    cout << *next(MyList.begin(), 4) << endl;


    for(int val : MyList)  cout << val << " ";
    cout << endl;
    for(int val : newlist)  cout << val << " ";
    cout << endl;

    return 0;
}