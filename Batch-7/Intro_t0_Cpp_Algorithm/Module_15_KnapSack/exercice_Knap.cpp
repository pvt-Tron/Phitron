#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    priority_queue<pair<float,pair<int,int>>> niw;
//    float wht[n];
    for(int i = 0; i < n; i += 1){
        int obvl, obw;
        cin >> obw >> obvl;
        float x = (float)obvl / obw;
        x = round(x);
        pair<int,int> tmp = {obvl, obw};
        niw.push({x,tmp});
        // cout << ".";
//      wht[i] = round(x);
    }
    int resw = 0;
    int res = 0;
    // int skip = 0;
    int quit = 0;
    int last = 0;
    int lastw = 0;
    for(int i = 0; i < n; i += 1){
        priority_queue<pair<float,pair<int,int>>> best;
        // cout << res << endl;
        pair<float,pair<int,int>> tmp;
        tmp = niw.top();
        niw.pop();
        float wht = tmp.first;
        pair<int, int> tmp1 = tmp.second;
        int weight = tmp1.second;
        int value = tmp1.first;
        cout << value << "v " << endl;
        // if(skip){

        // }
        if(best.empty()) cout << "empty" << " ";
        else cout << best.size() << " ";
        if(resw + weight > w){
            cout << "1.";
            int cnt;
            if(best.empty() || best.size() < 4){
                best.push(tmp);
                cnt = best.size();
            }
            int cnt2 = cnt * 2;
            while(cnt2--){
                cout << "2.";
                pair<float,pair<int,int>> tmp2;
                tmp2 = best.top();
                float wht2 = tmp2.first;
                pair<int,int> lstwv = tmp2.second;
                last = lstwv.first;
                lastw = lstwv.second;
                cout << value << " " << last << " ";
                if((res < (res - last) + value) && ((resw - lastw) + weight) < w){
                    res -= last;
                    res += value;
                    resw -= lastw;
                    resw += weight;
                    best.push(tmp);
                    if(cnt2 <= cnt){
                        best.pop();
                        cout << last << "x" << value << " ";
                    }
                }
            }

            // skip = 0;
            // skip = 1;
            // continue;
        }
        // else if(res > )
        else{
            best.push(tmp);
            resw += weight;
            res += value;
        }
        if(resw == w && i > n / 2) break;
    }
    cout << " ";
    cout << res;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    priority_queue<pair<float,pair<int,int>>> niw;
//    float wht[n];
    for(int i = 0; i < n; i += 1){
        int obvl, obw;
        cin >> obw >> obvl;
        float x = (float)obvl / obw;
        x = round(x);
        pair<int,int> tmp = {obvl, obw};
        niw.push({x,tmp});

//      wht[i] = round(x);
    }
    int resw = 0, res = 0, last = 0, lastw = 0;
    for(int i = 0; i < n; i += 1){
        pair<float,pair<int,int>> tmp;
        tmp = niw.top();
        niw.pop();
        float wht = tmp.first;
        pair<int, int> tmp1 = tmp.second;
        int weight = tmp1.second;
        int value = tmp1.first;
        if(resw + weight > w){
            if((res < (res - last) + value) && ((resw - lastw) + weight) < w){
                    res -= last;
                    res += value;
                    resw -= lastw;
                    resw += weight;
                    continue;
            }
        }
        else{
            last = value;
            lastw = weight;
            resw += weight;
            res += value;
        }
    }
    cout << res;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    priority_queue<pair<float,pair<int,int>>> niw;
//    float wht[n];
    for(int i = 0; i < n; i += 1){
        int obvl, obw;
        cin >> obw >> obvl;
        float x = (float)obvl / obw;
        x = round(x);
        pair<int,int> tmp = {obvl, obw};
        niw.push({x,tmp});

//      wht[i] = round(x);
    }
    int resw = 0;
    int res = 0;
    for(int i = 0; i < n; i += 1){
        pair<float,pair<int,int>> tmp;
        tmp = niw.top();
        niw.pop();
        float w = tmp.first;
        pair<int, int> tmpp = tmp.second;
        int weight = tmpp.second;
        int value = tmpp.first;
        if(res + weight > w) continue;
        else{
            resw += weight;
            res += value;
        }
        cout << res;
    }

    return 0;
}
