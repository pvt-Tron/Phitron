#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if(!st.empty()) st.pop();
    cout << st.top() << endl;
    st.pop();

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