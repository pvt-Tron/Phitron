#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;
    // a.roll = 29;
    // a.cgpa = 3.95;
    // //a.name = "karim";
    // char* tmp = new char[100];
    // strcpy(tmp, "karim");
    // strcpy(a.name, tmp);
    // delete tmp;  //cin >> a.name;
    // cin >> a.roll >> a.cgpa;
    // cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cin.getline(a.name,100); //cin >> a.name;
    cin >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    getchar();
    cin.getline(a.name,100); //cin >> a.name;
    cin >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    

    return 0;
}