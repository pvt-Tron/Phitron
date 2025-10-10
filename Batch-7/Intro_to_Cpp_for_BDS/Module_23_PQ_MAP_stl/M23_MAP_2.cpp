#include<bits/stdc++.h>
using namespace std;

int main(){

    /* // ------------ MAP1 ---------------
    map<string, int> mp1;
    int free[101];
    free[5] = 20;
    mp1["name1"] = 2;  // logN
    mp1["name2"] = 500;
    mp1["name10"] = 50;
    mp1["name4"] = 50;
    // cout << mp1["name2"] << endl; // map_name
    // cout << free[5] << endl;
    for(auto it = mp1.begin(); it != mp1.end(); it++){ // O(NlogN)
        cout << it->first << " " << it->second << endl; // logN
    }
    if(mp1.count["name4"]){
        cout << "YES";
    }
    else cout << "NO";
    */


    // ------------ MAP2 ---------------

    /* I love football He loves football we love cricket*/

    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string, int> mp2;
    while(ss >> word){
        //cout << word << endl;
        mp2[word]++;
    }
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        cout << it->first << " " << it->second  << endl;
    }
    /* Insert in Map: */
    string key = "name1";
    int val = 1;
    mp2(make_pair(key, val);
    mp2.insert_at({key, val});
    mp2.[key] = val;


    // -------------- SET -------------------

    /* n = 10 2 2 4 2 3 2 1 6 8 2*/


    set<int> st;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.insert(val);   // logN

    }
    for(auto it = st.begin(); it != st.end(); it++){
        cout << it* << endl;
    } /* out: 1 2 3 4 6 8 */

    if(st.count(4)){      // logN
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}
