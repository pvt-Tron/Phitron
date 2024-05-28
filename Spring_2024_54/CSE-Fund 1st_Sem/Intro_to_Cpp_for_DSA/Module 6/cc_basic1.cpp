#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;
namespace Cat1{
    string nc1 = "Nomecat1 Catcat1";
    int agc1= 19;
    int cat1mk1 = 22;
    int cat1mk2 = 30;
    void hallo1(){
    cout << "Hallo Cat1";
    }
    int TotCt1_marks(){
        return cat1mk1 + cat1mk2;
    }
}
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    // Person(string nm,int ag,int mk1,int mk2) : name(nm), age(ag), marks1(mk1), marks2(mk2){}
    // Person(string nm, int ag, int mk1, int mk2)
    // {
    //     name = nm;
    //     age = ag;
    //     marks1 = mk1;
    //     marks2 = mk2;
    // }
    void hallo(string &s)
    {

        cout << "Hallo! (func)" << endl;
        cout << name << " " << age << endl;    
        //cout << pers1.name << " " << pers1.age << endl;
    }
    int Total_marks(){
        return marks1 + marks2;
    }
};
    void hallo1(){
    cout << "Hallo!";
}

main()
{
    using namespace Cat1;
    Person pers1("Nome Cognome", 24, 95, 85);
    cout << pers1.name << " " << pers1.age << endl;
    cout << pers1.Total_marks() << endl;
    
    string a = "Hallo world";
    cin >> a;
    string s(a, 7);
    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}