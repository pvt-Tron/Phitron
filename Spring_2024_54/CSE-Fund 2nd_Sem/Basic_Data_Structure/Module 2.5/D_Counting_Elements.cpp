#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0 ; i < n; i++){
        cin >> v1[i];
    }

    // for(int j = 0; j < n; j++){
    //     cout << v1[j];
    //     if(j < n - 1) cout << " ";
    // }

    int count = 0;
    int tmp = 0;
    for(int j = 0; j < n; j++){
        auto dup = find(v1.begin(), v1.end(), (v1[j] + 1));
        if(dup != end(v1)) count++;
        
        // for(int i = 0; i < j; i++){
        //     if(v1[j] == v1[i]) tmp++;
        // }
        // if(tmp){
        //     tmp = 0;
        //     continue;
        // }
        
        //cout << *dup << "dup ";
        //cout << count << "c ";
        //cout << v1[j] << " ";

        // for(int k = 0; k < n; k++){    
        //     if(((v1[k]) + 1) == v1[j]){
        //         //cout << "k" << v1[k] + 1 << " ";
        //         if(tmp){continue;}
        //         tmp++;
        //     }
        //     count += tmp;
        //     tmp = 0;
        // }
        //cout << j << " ";
    }

    // for(int j = 0; j < n; j++){
    //     cout << v1[j];
    //     if(j < n - 1) cout << " ";
    // }
    cout << count;
    
    return 0;
}