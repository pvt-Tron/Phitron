#include<bits/stdc++.h>
using namespace std;
class StackBuild
{
private:

public:
    vector<int> v;
    // StackBuild(/* args */) {}
    // ~StackBuild() {}
    void push(int val){v.push_back(val);}

    void pop(){v.pop_back();}

    int top(){return v.back();}

    int size(){v.size();}

    bool empty(){
        if(v.size() == 0)return true;
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
    
    // while(st.empty() == true){}
    // while(st.empty()){}

    // while(st.empty() == false){}
    while(!st.empty()){
        cout << st.top() << endl;

    }
    
    
    
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.pop();
    // // if(st.empty() == true){}
    // if(st.empty() == false){cout << st.top() << endl;}
    


    return 0;
}