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
    // Person(string nm,int ag,int mk1,int mk2) : name(nm), age(ag), marks1(mk1), marks2(mk2){}
    Person(string name,int age,int marks1,int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }

    int Total_marks(){
        return marks1 + marks2;
    }
};

main()
{
    Person pers1("Nome Cognome", 24, 95, 85);
    cout << pers1.name << " " << pers1.age << endl;   
    cout << pers1.Total_marks() << endl;
    
    
    return 0;
}