#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    int roll;
    int marks;

    // Student() = default;

};
bool cmp(Student l, Student r){
    return (l.marks != r.marks) ? l.marks < r.marks : l.id < r.id;
    // if(l.marks < r.marks) return true;
    // else if(l.marks >= r.marks) return false;
    // else{
    //     if(l.id < r.id) return false;
    //     else if(l.id >= r.id) return true;
    // }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    Student mn;
    mn.marks = INT_MAX;
    int mnx = INT_MAX;
    Student mx;
    mx.marks = INT_MAX;
    int mxa = INT_MIN;
    Student m[3];
    m[1].marks = INT_MIN;
    m[2].marks = INT_MAX;
    for(int i = 0; i < n; i += 1){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
        mnx = min(a[i].marks, mnx);
        if(a[i].marks < mx.marks) mx = a[i];
        mxa = min(a[i].marks, mxa);
        if(a[i].marks < mn.marks) mn = a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i += 1){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    return 0;
}
