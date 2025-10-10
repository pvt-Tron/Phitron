#include<bits/stdc++.h>
using namespace std; // O(NlogN)
void conquer(int c[], int l, int mid, int r){
    
    int n = mid - l + 1;
    int a[n];
    int k = l;
    for(int i=0;i<n;i++) a[i]=c[k++];
    
    int m = r - mid;
    int b[m];
    k = mid + 1;
    for(int i=0;i<m;i++) b[i]=c[k++];

    int i = 0, j = 0, curr = l;
    
    while(i<n && j<m){
        if(a[i]<b[j])
            c[curr++]=a[i++];
        else
            c[curr++]=b[j++];
    }
    while(i<n) c[curr++]=a[i++];
    while(j<m) c[curr++]=b[j++];
    
    // merge(a,a+n,b,b+m,c);

    // int nl = mid - l + 1;
    // int nr = r - mid;
    // int left[nl], right[nr], d[nr];

    // for(int i=0;i<nl;i++) left[i]=c[l+i];

    // for(int i=0;i<nr;i++) right[i]=c[mid+1+i];

    // for(int i=0;i<nr;i++) d[i]=right[i];

    // int i = 0, j = 0, curr = 0;

    // while(i<nl && j<nr){
    //     if(left[i]<right[j]) c[curr++]=left[i++];
    //     else c[curr++]=right[j++];
    // }

    // while(i<nl) c[curr++]=left[i++];
    // while(j<nr) c[curr++]=right[j++];

    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout << endl;
}
void divide(int a[], int l, int r)
{
    // >> // Print the current subarray being processed
    for(int i=l;i<=r;i++) cout << a[i] << " ";
    cout << endl;

    if(l >= r) return;

    int mid = (l + r) / 2;
    divide(a, l, mid);
    divide(a, mid + 1, r);
    conquer(a, l, mid, r);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    divide(a, 0, n-1);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}