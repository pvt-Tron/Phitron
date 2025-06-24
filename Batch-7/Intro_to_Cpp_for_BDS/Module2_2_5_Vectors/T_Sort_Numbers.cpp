    #include<bits/stdc++.h>
    using namespace std;
    void minmax1(int *arr1, int n2){
        int i, tmp1;
        int arr2[3];
        for(i = 0; i < n2; i++){
            arr2[i] = arr1[i];
        }
        for(i = 0; i < n2 - 1; i++){
            for(int j = i + 1; j < n2; j++){
                if(arr1[i] > arr1[j]){
                    tmp1 = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = tmp1;
                }
            }
        }
        cout << arr1[0] << endl << arr1[1] << endl << arr1[2] << endl << endl;
        for(int i = 0; i < n2; i++){
            cout << arr2[i];
            if(i < n2 - 1){cout << endl;}
        }
    }
    int main()
    {
        int n1 = 3;
        int arr1[n1];
        for(int i = 0; i < n1; i++){
            cin >>arr1[i];
        }
        minmax1(arr1, n1);
        return 0;
    }