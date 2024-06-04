#include <bits/stdc++.h>
#include <iomanip>
// #include<utility>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int roll;
    int marks;
    Person() = default;
    Person(string name, int roll = 0, int marks = 0);
    Person(string nm, int rl, int mk) : name(nm), roll(rl), marks(mk) {}
};

bool cmp(Person a, Person b)
{
    
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

    // int mn1 = INT_MAX;   //  <-------------// min max
    // int mx1 = INT_MIN;   // Risolve il problema di assegnazione Min Max if(i == 0) mx = ar[0] etc.
   
    // for(int i = 0; i < n; i++){
    //     if(a[i].marks < mn1)
    //     {
    //         mn1 = a[i].marks;
    //     }
    //     if(a[i].marks > mx1)
    //     {
    //         mx1 = a[i].marks;
    //     }
    // }
    Person mn1;
    Person mx1;
    mn1.marks = INT_MAX; // Risolve il problema di assegnazione Min Max if(i == 0) mx = ar[0] etc.
    mx1.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn1.marks)
        {
            mn1 = a[i];//.marks; ?? No Copy the whole Subject
        }
        if (a[i].marks > mx1.marks)
        {
            mx1 = a[i];
        }
    }

    cout << "min " << mn1.name << mn1.marks << " max " << mx1.name << mx1.marks << endl;
    return 0;
}