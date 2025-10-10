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
    //Person(string name = "no_name", int roll = 0, int marks = 0);
    Person(string nm, int rl, int mk) : name(nm), roll(rl), marks(mk) {}
};



int main()
{
    int n;
    cin >> n;
    Person a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[n].marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i].marks > a[j].marks){
                swap(a[i], a[j]);
            }
            if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i], a[j]);
                }
            }
            cin >> a[i].name >> a[i].roll >> a[n].marks;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}