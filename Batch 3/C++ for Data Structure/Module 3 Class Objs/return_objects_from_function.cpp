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

Student fun()
{
    char name[100]="Rahim Ullah";
    Student rahim(29,'C',7,name);
    return rahim;
}

int main()
{
    Student rahim=fun();

    // Student rahim(29,'A',7,"Rahim Ullah");
    // Student karim(55,'C',9,"Karim Cholimulla");
    
    // cout<<karim.roll<<endl;
    cout<<rahim.roll<<endl;    
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
        
    return 0;
}