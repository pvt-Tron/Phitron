#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char chst[10] = "Hello";
    char chst2[10] = "Gello";
    /* strcmp() 0 for = 1 for != */
    if(strcmp(chst, chst2)) cout << "diff" << " ";
    else cout << "same" << " ";
    
    string st1;
    string st2;
    st1 += "Hello";
    cout << st1 << " ";
    st2 = st1;
    if(st1 != st2) cout << "diff" << " ";
    else cout << "same" << " ";
    cout << st2 << " ";
    st1 += st2;
    cout << st1 << " ";
    st1.append(st2);
    cout << st1 << " ";
    cout << st1.size() << " ";
    cout << st1.max_size() << " ";
    string st3;
    st3.push_back('s');
    st3.push_back('t');
    cout << st3 << " ";
    st3.pop_back();
    st3.clear();
    st3.empty(); // = is empty ? 1 = empty
    st1.resize(4);
    st1.resize(8, 'x');
    cout << st1 << " ";
    cout << st1.at(4) << " ";
    cout << st1[4] << " ";
    cout << st1[st1.size() - 1] << " ";
    cout << st1.front() << " ";
    st1.resize(9, 'a');
    cout << st1.back() << " ";
    st1.pop_back();
    cout << st1.back() << " ";
    st2.assign(st2);
    st2.erase(3); // trunc st at [3]->> empty
    st2.erase(3, 2); // remove 2 at [3]
    st2.replace(3, 4, "some");
    st2.replace(3, 0, "some"); // (pos, replaced, text)
    st2.insert(5, "some");
    st2.insert(st2.begin() + 5, 'y');
    sort(st2.begin(), st2.end());
    return 0;
}