#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t1, tn1, i, n1, h, k;
    //int min = 0;
    cin >> tn1;
    for(t1 = 0 ; t1 < tn1; t1++){
        cin >> n1;
        int ar1[n1];
        for(i = 0 ; i < n1; i++){
            cin >> *(ar1 + i);
            //cout << *(ar1 + i) << " ";
        }
        for(i = 1 ; i < n1; i++){
            for(int j = i + 1 ; j <= n1; j++){
                if(i == 1){k = *(ar1 + (i - 1)) + *(ar1 + (j - 1)) + j - i;}
                else{
                h = (*(ar1 + (i - 1)) + *(ar1 + (j - 1)) + j - i);
                //cout << h << " " << k << " ,";
                k = min(k, h);
                }
                
            }
        }
        cout << k << endl;
        //delete[] ar1;
    }

    return 0;
}