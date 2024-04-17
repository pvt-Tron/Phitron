#include<bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
// #include<utility>
// #include<algorithm>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            // cout<<"I am called automatically"<<endl;
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};

int fun()
{
    char name[100]="Rahim Ullah";
    Student rahim(5,'A',11,name);
    // new Student;
    return 0;
}

int main()
{
    // Student rahim=fun();
    char name[100]="Rahim Ullah";
    Student* rahim = new Student(5,'A',11,name);
    (*rahim).roll=55;    
    // int * a = new int;
    // *a=10;
    // cout<<a<<endl;
    // delete rahim;
    
    cout<<(*rahim).roll<<endl;    
    cout<<(*rahim).section<<endl;
    cout<<(*rahim).cls<<endl;
    cout<<(*rahim).name<<endl;
    
    delete rahim;
    // shortcut upay
    // arrow sign
    // (*rahim). = rahim->

    // cout<<rahim.roll<<endl;    
    // cout<<rahim.section<<endl;
    // cout<<rahim.cls<<endl;
    // cout<<rahim.name<<endl;
        
    return 0;
}