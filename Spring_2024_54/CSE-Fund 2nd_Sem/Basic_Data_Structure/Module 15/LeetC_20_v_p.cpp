#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else{
            if(st.empty()) return false;
            else{
                if(st.top() == '(' && c == ')') st.pop();
                else if(st.top() == '[' && c == ']') st.pop();
                else if(st.top() == '{' && c == '}') st.pop();
                else return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string snpt1;
    cin >> snpt1;
    int res1 = isValid(snpt1);
    if(res1) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}
