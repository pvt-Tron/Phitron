#include<bits/stdc++.h>
using namespace std;
class Revorder{
    public:
        string nm;
        int cls;
        char sec;
        int id;
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
    int n = t / 2;
    Revorder* inpt = new Revorder[t];
    
    for(int i = 0; i < t; i++){
        cin >> inpt[i].nm >> inpt[i].cls >> inpt[i].sec >> inpt[i].id;
    }
    int j = t - 1;
    for(int i = 0; i < n; i++){
        // cout << inpt[i].id << " " << inpt[j].id << ".";
        swap(inpt[i].id, inpt[j].id);
        // int tmp = inpt[i].id;
        // inpt[i].id = inpt[j].id;
        // inpt[j].id = tmp;
        j--;
    }

    for(int i = 0; i < t; i++){
        cout << inpt[i].nm << " ";
        cout << inpt[i].cls << " ";
        cout << inpt[i].sec << " ";
        cout << inpt[i].id << " ";
        // if(i < n -1) 
        cout << endl;
    }
    
    return 0;
}