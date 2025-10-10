#include <bits/stdc++.h>

using namespace std;

class Find
{
    public:
        string st;
        string wd;
        int sz;
        int wsz;
    Find(string st, string wd, int sz, int wsz){
        this->st = st;
        this->wd = wd;
        this->sz = sz;
        this->wsz = wsz;
    }
};

void findWord(Find &obj){
    
    while(obj.st.find(obj.wd) != -1){
        obj.st.replace(obj.st.find(obj.wd), obj.wd.length(), "$");
    }
    cout << obj.st;
}
    // int start = 0;
    // int cnt = 0;
    // int k = 0;
    
//     for(int i = 0; i < obj.sz; i++){
//         if( start == 0 && obj.st[i] == obj.wd[0]){
//             start = i;
//             cnt = 1;
//             // cout << " s ";
//         }
//         else if(start != 0){
//             if(cnt == obj.wsz){
//                 (obj.st).replace(start, obj.wsz, "$");
//                 // s.erase(start, nx - 1);
//                 // s[start] = '$';
//                 // int j;
//                 // for(j = start; j < nx - 1; j++){
//                 //     s.erase(j, 1);
//                 // }
//                 // s.replace(s.begin() + start, s.begin() + (cnt - 1), 1,'$');
//                 cnt = 0;
//                 i = start + 1;
//                 start = 0;
//                 obj.sz -= obj.wsz;
//                 // cout << " r ";
//             }
//             else if(obj.st[i] != obj.wd[cnt]){
//                 // cout << " e" << cnt << " " << x[cnt] << " ";
//                 cnt = 0;
//                 start = 0;    
//             }
//             else cnt++;
        // }
        //cout << cnt << ".";
    // }
//     cout << obj.st;
// }

int main()
{
    int t;
    cin>>t;
    while(t--){
        // string name = "mainSt";
        string s;
        string x;
        cin >> s >> x;
        int n = s.size();
        int nx = x.size();
        // Find* finder = new
        Find finder(s,x,n,nx);
        //cout << finder.st << " " << finder.wd << " " << finder.sz << " " << finder.wsz << " ";
        findWord(finder);
        if(t > 0) cout << endl;
    }
    
    return 0;
}        
        // finder.st = s;
        // finder.wd = x;
        // finder.sz = n;
        // finder.wsz = nx;
        // Find strcat(name, (t + 48));
        // strcat(name, (t + 48)).st = s;
        // strcat(name, (t + 48)).wd = x;
        // strcat(name, (t + 48)).sz = n;
        // strcat(name, (t + 48)).wsz = nx;
        // FindWord(strcat(name (t + 48)));
        // cout << n << nx << endl;
        // cout << x << endl;
        // s.erase(6, nx);

    //     string car[];
//     string wrd[];
//     int csizer[];
//     int wsizer[];
//     // Find a[t];
//     // getchar();
//     for(int i=0;i<t;i++)
//     {
//         cin>>car[i];
//         cin>>wrd[i];
//         cin.ignore();
//         csizer[i]=car.size();
//         wsizer[i]=wrd.size();
//     }
    
//     while(car[i]<<wrd[i])
//     {
//         car[i].replace(wrd[i],'$');                
//     }
    
//     for(int i=0;i<t;i++)
//     {
//     cout<<car[i]<<endl;
//     }

//     string tmpWord;
//     for(int i=0;i<t;i++)
//     {
//         a[i].sizer=(a[i].sizer - a[i].wsizer);
//         resize(a[i].str,a[i].sizer);   
//     append(a[i].str,a[i].word)
    
//     Write your code here

