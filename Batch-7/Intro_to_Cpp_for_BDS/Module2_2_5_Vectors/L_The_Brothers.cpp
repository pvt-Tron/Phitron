#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int i = a.size();
    int j = b.size();
    while(a[i] != ' '){
        j -= 1;
        i -= 1;
        if(a[i] == b[j]) continue;
        else{
            cout << "NOT";
            return 0;
        }
    }
    cout << "ARE Brothers";
    return 0;
}