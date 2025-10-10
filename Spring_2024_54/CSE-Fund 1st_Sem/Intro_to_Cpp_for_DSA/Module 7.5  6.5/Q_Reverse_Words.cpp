#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int prnt_rev(string sr1, int idx){
    if(idx <= 0) return 0;
    cout << sr1[idx - 1];
    int x = prnt_rev(sr1, idx - 1);
    
    return x;
}

int main()
{
    string s;
    char c;
    int i = 0;
    int chk1 = 0;
    int res1 = 0;
    //c = getchar();
    
    string word;
    getline(cin, s);
    int t = 0;
    //prnt_rev(s, t);
    stringstream ss(s);
    while(ss >> word){
        if(t > 0) cout << " ";
        prnt_rev(word, (word.length()));
        t = 1;
        //cout << word << " ";        
    }

    return 0;
}