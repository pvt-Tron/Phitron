#include<bits/stdc++.h>
using namespace std;
class vectStack
{
// private:
    /* data */
public:
    vector<int> v;
    list<int> l; // == vector  l. <--  v.
    void push(int val){
        return v.push_back(val);
    }
    void pop(){
        return v.pop_back();
    }
    int top(){
        return v.front();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }

};

int main(){
    // stl Stack
    // vectStack stk;
    stack<int> stk;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk.push(val); // LIFO
    }
    cout << stk.empty() << " " << stk.size() << endl;
    // ?? // stk.emplace() << " " << stk.swap() << " " <<; // ??
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl << stk.empty() << " " << stk.size();

    return 0;
}