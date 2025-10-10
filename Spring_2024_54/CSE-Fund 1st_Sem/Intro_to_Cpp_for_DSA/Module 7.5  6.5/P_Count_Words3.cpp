#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main()
{
    string s;
    char c;
    int i = 0;
    int chk1 = 0;
    int res1 = 0;
    c = getchar();
    //stringstream ss;
    
    getline(cin, s);
    s = c + s;
    stringstream ss(s);
    string word;
    //int len1 = s.length() + 1;
    while(ss >> word){
        for(char c1 : word){
            if((c1 >= 65 && c1 <= 90)  || (c1 >= 97 && c1 <= 122)){
                chk1 = 1;
            }
            else{break;} 
        }
        if(chk1){
            res1++;
            chk1 = 0;
        }
    }

    cout << res1;
    //cout << i << " ";
    return 0;
}