#include<bits/stdc++.h>

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
int main()
{
    Student rahim(29,'A',7,"Rahim Ullah");
    Student karim(55,'C',9,"Karim Cholimulla");
    
    cout<<rahim.roll<<endl;
    cout<<karim.roll<<endl;    
    // cout<<karim.section<<endl;
    // cout<<karim.cls<<endl;
    // cout<<karim.name<<endl;
        
    return 0;
}