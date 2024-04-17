#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
            
        }
};
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        // cout<<word<<endl;
        print(ss);
        cout<<word<<endl;
    }
}

int main()
{
    // string s="hello";
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    print(ss);
    Person* rakib=new Person("Rakib Ahsan",24);
    Person* sakib=new Person("Sakib Ahamed",23);
    //karib=sakib;
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    *rakib=*sakib;
    // delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}