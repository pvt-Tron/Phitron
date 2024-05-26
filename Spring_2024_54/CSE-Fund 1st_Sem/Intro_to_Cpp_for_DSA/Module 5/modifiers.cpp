#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    getchar();
    cin >> b;
    cout << a.size() << "<s ";

    a.append(b);
    cout << a.size() << "<s ";

    a.push_back('A');
    cout << a << " ";
    
    a.pop_back();
    cout << a << " ";
    a.push_back('A');
    
    a.erase(4, 3);
    
    a.replace(4, 0, "so");

    a.insert(5, "os");
    cout << a.size() << "<s ";
    cout << a.max_size() << "<ms ";
    cout << a.capacity() << "<c ";

    return 0;
}