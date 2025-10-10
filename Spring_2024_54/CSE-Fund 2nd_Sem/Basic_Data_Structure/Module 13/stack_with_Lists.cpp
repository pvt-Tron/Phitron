#include<bits/stdc++.h>
using namespace std;
class StackBuild
{
private:

public:
    list<int> l;
    // StackBuild(/* args */) {}
    // ~StackBuild() {}
    void push(int val){l.push_back(val);}

    void pop(){l.pop_back();}

    int top(){return l.back();}

    int size(){l.size();}

    bool empty(){
        if(l.size() == 0)return true;
        else false;
        // v.empty();
    }
};
int main()
{
    StackBuild st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}