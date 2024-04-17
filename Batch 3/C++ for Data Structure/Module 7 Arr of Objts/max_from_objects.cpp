#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
        // Student(string name,int roll,int marks)
        // {
        //     this->name=name;
        //     this->roll=roll;
        //     this->marks=marks;
        
        // }
};

int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    Student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        mx=a[i];
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        mn=a[i];
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    

    return 0;

}