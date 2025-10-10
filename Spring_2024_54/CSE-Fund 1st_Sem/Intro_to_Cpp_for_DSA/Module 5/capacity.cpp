#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string a;
        
    a = "aweaeqwrfsdgdfsdfgds";
    cout << a << " ";
    cout << a.size() << " ";
    cout << a.max_size() << " ";
    cout << a.capacity() << " ";
    cout << endl;
    a = "aweaeqwrfwwrreefssdfsdgderffsdwerfgds";
    cout << a << " ";
    cout << a.size() << "<s ";
    cout << a.max_size() << "<ms ";
    cout << a.capacity() << "<c ";
    cout << endl;
    // a.resize(40);
    a.resize(40, 'X');
    cout << a << " ";
    cout << a.size() << "<s ";
    cout << a.max_size() << "<ms ";
    cout << a.capacity() << "<c ";

    return 0;
}