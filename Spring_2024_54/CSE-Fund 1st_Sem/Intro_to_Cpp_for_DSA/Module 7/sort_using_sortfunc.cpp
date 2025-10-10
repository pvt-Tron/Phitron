#include <bits/stdc++.h>
//#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int roll;
    int marks;
    Person() = default;
    Person(string nm, int rl, int mk) : name(nm), roll(rl), marks(mk) {}
};

bool cmp(Person a, Person b)
{
    // //1
    if(a.marks >= b.marks) return true;
    else return false;
    // //2
    // if(a.marks == b.marks) return (a.roll < b.roll);
    // else return a.marks > b.marks;
    // //3
    // if(a.marks >= b.marks) return true;
    // else if(a.marks < b.marks) return false;
    // else{
    //     if(a.roll > b.roll) return true;
    //     else return false;
    // } 
    //return (a.roll < b.roll);
    // return a.marks >= b.marks;
}

int main()
{
    int n;
    cin >> n;
    Person a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[n].marks;
    }
    // sort(a, a + n);  // Sort with sort()
    sort(a, a + n, cmp); //  Sort with sort() and Compare

    for(int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}