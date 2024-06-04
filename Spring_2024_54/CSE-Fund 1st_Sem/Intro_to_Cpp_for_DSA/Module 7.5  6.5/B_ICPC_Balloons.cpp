#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,i,tmp,n;
    int score;
    int number = 0;
    cin >> t;
    while(t--){
        n = 0;
        cin >> n;
        string s;
        cin >> s;
        // s.length();
        tmp = 0; 
        i = 0; 
        score = 0;
        while(i < n){
            int adder = 2;
            //cout << s[i] << " ";
            for(int j = 0; j < n; j++){
                if(s[i] < 'A'){
                    number = 1;
                    break;
                }
                else if(s[i] == s[j]){
                    if(tmp){
                        s.replace(j,1,1,'1');
                        adder++;
                    }
                    else{
                        tmp++;
                    }
                    
                }
                else continue;
            }
            if(number){
                number = 0;
                i++;
                continue;
            }
            s.replace(i,1,1,'2');
            tmp = 0;
            score += adder;
            i++;
            //cout << score << " ";
        }
        //getchar();
        // for(int h = 0; h < n; h++){
        //     cout << s[h] << " ";
        // }
        cout << score;
        if(t > 0) cout << endl;
    }
    
    return 0;
}