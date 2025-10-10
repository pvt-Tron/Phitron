#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm,int ag,int mk1,int mk2) : name(nm), age(ag), marks1(mk1), marks2(mk2){}
};
main()
{
    Person pers1("Nome Cognome", 24, 95, 85);
    Person* pers2 = new Person("Nome2 Cognome2", 24, 95, 85);
    Person* pers3 = new Person("Nome3 Cognome3", 24, 95, 85);
    cout << pers1.name << " " << pers1.age << endl;
    // cout << pers3.name << " " << pers3.age << endl;
    cout << pers2->name << " " << pers2->age << endl;
    // pers3 = pers2; // error
    // pers2->name = pers3->name; // error
    // pers2->age = pers3->age;
    //  delete pers2;
    *pers3 = *pers2; //ok
     delete pers2;

    cout << pers2->name << " " << pers2->age << endl;
    // cout << pers3->name << " " << pers3->age << endl;
    delete pers2;
    cout << pers2->name << " " << pers2->age << endl;

    return 0;
}