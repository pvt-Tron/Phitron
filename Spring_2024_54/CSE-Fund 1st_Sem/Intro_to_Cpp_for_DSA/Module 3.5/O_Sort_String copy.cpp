#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
    int n1; 
    char tmp;
    cin >> n1;
    char s[n1];
    int i = 1;
    for(i = 0; i < n1; i++){
        cin >> s[i];
    }
    
    for(i = 0; i < n1 - 1; i++){
        for(int j = i + 1; j < n1; j++){
        if(s[i] > s[j]){
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            }
        }
    }
    //sort(s.begin(), s.end());
    for(i = 0; i < n1; i++){
        cout << s[i];
    };
    cout << endl;

    return 0;
}