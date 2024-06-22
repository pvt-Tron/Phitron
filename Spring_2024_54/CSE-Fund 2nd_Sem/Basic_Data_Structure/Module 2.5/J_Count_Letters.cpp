#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> fq(26);
    string s;
    getline(cin,s);
    //cout << s;
    for(char c : s){
        //cout << c;
        int tmp = (c - 'a');
        fq[tmp]++;
    }
    int alpha = 0;
    for(int l : fq){
        if(l){
            char tmp = (alpha + 'a');
            cout << tmp << " : " << l << endl;
        }
        alpha++;
    }
    
    return 0;
}