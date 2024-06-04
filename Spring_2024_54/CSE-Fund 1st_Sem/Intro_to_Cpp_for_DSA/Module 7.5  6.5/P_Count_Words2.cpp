#include<bits/stdc++.h>
#include<cstring>

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
    int len1 = s.length() + 1;
    while(len1--){
        if((c >= 65 && c <= 90)  || (c >= 97 && c <= 122)){
            chk1 = 1;
        }
        else{
            if(chk1){
                res1++;
                chk1 = 0;
            }
        }
        c = s[i];
        i++;
    }

    cout << res1;
    return 0;
}