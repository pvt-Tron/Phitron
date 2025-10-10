// MergeSort with Merge
#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int start, int end)
{
    if(start>=end) return;

    int mid = (start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    mergeSort(a, 0, n-1);

    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}