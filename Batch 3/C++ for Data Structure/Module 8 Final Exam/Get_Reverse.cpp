#include<bits/stdc++.h>
using namespace std;
class Revorder{
    public:
        string nm;
        int cls;
        char sec;
        int math;
        int eng;
        // Revorder();
        // Revorder(string nm, char sec, int math, int eng){
        //     this->nm = nm;
        //     this->sec = sec;
        //     this->math = math;
        //     this->eng = eng;
        // }
};

int main(){
    int t;
    cin >> t;
    int n = t;
    Revorder* inpt = new Revorder[t];
    while(--t >= 0){
        cin >> inpt[t].nm >> inpt[t].cls >> inpt[t].sec >> inpt[t].math >> inpt[t].eng;
    }
    for(int i = 0; i < n; i++){
        cout << inpt[i].nm << " ";
        cout << inpt[i].cls << " ";
        cout << inpt[i].sec << " ";
        cout << inpt[i].math << " ";
        cout << inpt[i].eng << " ";
        if(i < n -1) cout << endl;
    }
    
    return 0;
}