#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

// *Class and Class objects
class Person
{
    public:
    string name;
    int id;
        void print1()
        {
            cout<<"name: "<<name<<" "<<"id: "<<id<<endl;
        }

        Person(string name, int id)
        {
            this->name=name;
            this->id=id;
        }
};
class CildclPers: public Person
{
    public:
        int id2=2;
};

// Functions data_type fun_name(data_type a data_type c data_type z){}
int addition(int x, int y)
{
    return x+y;
}

int main()
{   // Datatypes
    short sa=2;              //
    int a=20;                // 4 bytes
    float fd= 2.7;           // 4 bytes
    double d= 2.678;         // 8 bytes
    long double ld= 2.678;    // 8 bytes
    long la= 20000;          //
    long long lla= 2000000;  //
    char c;                  // 1 byte
    void;                    //null
    bool x01;                // 1 byte
    cout<<sa<<" "<<a<<" "<<fd<<" "<<d<<" "<<ld<<endl;
    cout<<la<<" "<<lla<<" "<<c<<" "<<" "<<x01<<endl;
    cout<<fixed<<setprecision(2)<<sa<<" "<<a<<" "<<fd<<" "<<d<<" "<<ld<<endl;
    // Operators + - * / 
    // logical > < >= <= == !=
    // Input Init. Array, Condition, Loop etc.
    int n;
    cin>>n;
    int arr[n];
    if(n!=0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    else
    {
        cout<<"n=0!"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // array 2d
    int ar2d[n][n];

    	// Strings 
        // size name.size() | name.lenght() {iostream} 
        // name.substr(x,y) x start position y chars cfr string costructor
        // String Costructor*

    string name;
    
    // Functions
    cout<<addition(a,ld)<<endl;
    
    // pointers
    int px=7;
    int *pntx;
    pntx=&px;
    cout<<"px address "<<pntx<<" "<<&px<<endl;
    cout<<"px data is "<<*pntx<<" "<<px<<endl;
    
    // *Class and Class objects, SubClasses
    Person per1("prova",555);
    Person per2("nome2",888);
    per1.print1();
    per2.print1();
    // cout<<"id2: "<<per2.id2<<" "; ??
    per2.print1();
        

    return 0;
}