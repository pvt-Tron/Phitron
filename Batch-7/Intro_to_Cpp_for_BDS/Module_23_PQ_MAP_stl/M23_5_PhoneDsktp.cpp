#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;
    int screen = y / 2;
    int bk = screen * 7;
    if(x%2 == 1){
        screen++;
        bk += 11;
    }
    if(x > bk){
        x -= bk;
        screen += x / 15;
        if(x%15 != 0) screen++;
    }
    cout << screen << endl;


    return 0;
}
