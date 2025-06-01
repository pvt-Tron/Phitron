#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    // cout << x << " ";
    if(x >= 48 && x <= 57){
        cout << "IS DIGIT";    
        return 0;
    }
    cout << "ALPHA" << endl;
    if(x >= 97) cout << "IS SMALL";
    else cout << "IS CAPITAL";

    return 0;
}