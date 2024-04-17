#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n_lenghts, qu_tot;
    int dataX;
    cin >> n_lenghts >> qu_tot;
    int counter1[n_lenghts];
    // counter 1 = row lenghts
    int arr1[n_lenghts][1001];
    for(int i = 0; i < n_lenghts; i++) {
        counter1[i] = 0;
        while( dataX != '\0') {
            dataX = 0;
            cin >> dataX;
            arr1[i][counter1[i]] = dataX;
            counter1[i]++;    
        }        
    }
    int quer1[2][1001];
    int counter2[2];
    // counter2[0] = row positions
    // counter2[1] = query positions
    int h = 0;
    while(quer1[h][counter2[h]] != '\0') {
        cin >> quer1[h][counter2[h]];
        counter2[h]++;
    }
    h++;
    while(quer1[h][counter2[h]] != '\0') {
        cin >> quer1[h][counter2[h]];
        counter2[h]++;
    }
    
    int k = 0;
    int x = 0;
    while(x < n_lenghts) {
        for(k = 0; k < counter1[x];k++) {            
            for(int i = 0; i < 2; i++) {
                cout << arr1[quer1[i][k]][quer1[i][counter2[i]]] << endl;
            }
        }
        x++;
        k = 0;
    }
    
    return 0;
}
