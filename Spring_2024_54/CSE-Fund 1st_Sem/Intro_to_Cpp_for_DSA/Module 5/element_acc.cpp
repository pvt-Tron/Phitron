#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    cout << a[0] << " " << a.at(0) << " " << a[a.size()-1] << " ";
    cout << a.back() << " " << a.front() << " ";
    cout << a << " ";
    cout << a.size() << "<s ";
    cout << a.max_size() << "<ms ";
    cout << a.capacity() << "<c ";


    return 0;
}