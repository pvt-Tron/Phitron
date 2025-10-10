#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{   int t;
    int a = 0, b = 0, c = 0, d = 0;
    int i = 6;
    cin >> t;
    while(t--){
        long int k;
        cin >> k;
        while(i--){
            b = a;
            a = k%10;
            k /= 10;
            //cout << a << b << k <<" ";
            if(i == 4 || i == 1){
                if(i == 4) c = a + b + k%10;
                else{
                    d = a + b + k%10;
                    break;
                }
            }
        }
        //cout << c << " " << d << " ";
        if(c == d) cout << "YES";
        else cout << "NO";
        if(t > 0) cout << endl;
        k = 0;
        i = 6;

    }
    return 0;
}