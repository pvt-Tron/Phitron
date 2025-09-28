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

bool cmp(Student a,Student b)
{
    if(a.marks < b.marks) return true;
    else return false;
}

int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    
    // sort function
    sort(a,a+3,cmp);
    Student b[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,b[i].name);
        cin>>a[i].roll>>b[i].marks;
        cin.ignore();
    }
    // sort(b,b+3);

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=i+1;j<3;j++)
    //     {
    //         if(a[i].marks < a[j].marks)
    //         {
    //             swap(a[i],a[j]);
    //         }
    //     }

    // }

    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}