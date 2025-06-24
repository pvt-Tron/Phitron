    #include<bits/stdc++.h>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int n, t;
        cin >> n >> t;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i]; // O(N)
        sort(v.begin(), v.end()); // O(NlogN)
        while(t--){ //   O(Q)
            int b;
            cin >> b;
            int notfnd = 1;
            int lw = 0;
            int hg = n - 1;   
            while(lw <= hg){  // O(logN) 
                int mid = (lw + hg) / 2; 
                if(v[mid] == b){
                    notfnd = 0;
                    break;
                }
                else if(v[mid] > b) hg = mid - 1;
                else lw = mid + 1;
            }
            if(notfnd) cout << "not found";
            else cout << "found";
            if(t > 0) cout << endl;  
        }  // O(N) + O(NlogN) + O(QlogN) + [(O(Q) + O(logN) =] O(QlogN)
                        // = O(NlogN)
        return 0;
    }