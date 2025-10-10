#include<bits/stdc++.h>
using namespace std;
class Revorder{
    public:
        string nm;
        int cls;
        char sec;
        int id;
        int math;
        int eng;
        int tot;
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
    Revorder* inpt = new Revorder[t];
    
    for(int i = 0; i < t; i++){
        cin >> inpt[i].nm >> inpt[i].cls >> inpt[i].sec >> inpt[i].id >> inpt[i].math  >> inpt[i].eng;
        inpt[i].tot = inpt[i].math + inpt[i].eng;
    }
    int i = 0;
    for( i = 0; i < t - 1; i++){
        for(int j = i + 1; j < t; j++){
        // cout << inpt[i].id << " " << inpt[j].id << ".";
            if(inpt[i].tot <= inpt[j].tot){
                if(inpt[i].tot == inpt[j].tot){
                    if(inpt[i].id > inpt[j].id) swap(inpt[i], inpt[j]);
                }
                else swap(inpt[i], inpt[j]);
            }
        // int tmp = inpt[i].id;
        // inpt[i].id = inpt[j].id;
        // inpt[j].id = tmp;
        }
    }

    for(int i = 0; i < t; i++){
        cout << inpt[i].nm << " ";
        cout << inpt[i].cls << " ";
        cout << inpt[i].sec << " ";
        cout << inpt[i].id << " ";
        cout << inpt[i].math << " ";
        cout << inpt[i].eng << " ";
        // if(i < n -1) 
        cout << endl;
    }
    
    return 0;
}