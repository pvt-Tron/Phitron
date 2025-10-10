#include <bits/stdc++.h>
//#include <vector>
#include <algorithm>
using namespace std;

class Freq
{
public:
    char value;
    int count;
    // string name;
    // int roll;
    // int marks;
    // Person() = default;
    // // Person(string name, int roll = 0, int marks = 0);
    // Person(string nm, int rl, int mk) : name(nm), roll(rl), marks(mk) {}
};
bool cmp(Freq a, Freq b)
{
    return a.count > b.count;
    // //1
    // if(a.marks >= b.marks) return true;
    // else return false;
    // //2
    // if(a.marks == b.marks) return (a.roll < b.roll);
    // else return a.marks > b.marks;
    // //3
    // if(a.marks >= b.marks) return true;
    // else if(a.marks < b.marks) return false;
    // else{
    //     if(a.roll > b.roll) return true;
    //     else return false;
    // } 
    //return (a.roll < b.roll);
    // return a.marks >= b.marks;
}


int main()
{
    string s;
    cin >> s;
    Freq f[26];
    
    for (char i = 0; i < 26; i++)
    {
        f[i].value = i + 'a';
        f[i].count = 0;
    }
    for(char c : s){
        int ascii = int(c - 'a');
        f[ascii].count += 1;
    }
    sort(f, f + 26,cmp);
    for (int i = 0; i < 26; i++){
        // if(f[i].count > 0){
        //     cout << f[i].value << " " << f[i].count << endl;
        // }
        if(f[i].count > 0){
            for (int j = 0; j < f[i].count; j++){
            
                cout << f[i].value;
                // cout << f[i].value << " " << f[i].count << endl;
            }
        }    
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if(a[i].marks > a[j].marks){
    //             swap(a[i], a[j]);
    //         }
    //         if(a[i].marks == a[j].marks){
    //             if(a[i].roll > a[j].roll){
    //                 swap(a[i], a[j]);
    //             }
    //         }
    //         cin >> a[i].name >> a[i].roll >> a[n].marks;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    // }
    return 0;
}