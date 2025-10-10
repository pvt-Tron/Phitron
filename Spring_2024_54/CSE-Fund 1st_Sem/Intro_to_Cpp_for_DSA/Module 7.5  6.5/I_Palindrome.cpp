#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool my_pal(string x, int idx){
    if(idx == 0 || idx == 1) return 1;
    //cout << x[0] << x[idx] << " ";
    int res1 = x[0] != x[idx];
    idx--;
    if(res1) return 0;
    return my_pal(x.substr(1), idx - 1);
}
int main()
{   
    string s;
    getline(cin,s);
    //cout << s << " ";
    int k = s.length() - 1;
    int flag = my_pal(s, k);
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}