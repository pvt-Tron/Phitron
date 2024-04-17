//#include<iostream.h>
#include<bits/stdc++.h>

// #include<strings.h>

using namespace std;
int main()
{
    string s1="Hello";    // capacity
    string s2;
    
    cin>>s2;
    cout<<s2<<endl;
    //s1.size()  1
    cout<<s1.size()<<endl;
    // size name.size() 
    // cout<<s1.lenght()<<endl; // {iostream} 
    //s1.max_size() 2
    cout<<s1.max_size()<<endl;   
    //.empty() 3
    if(s1.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    //.resize() 4
    s2.resize(5);
    s1.resize(20,'X');
    cout<<s2.size()<<""<<s1.size()<<endl;
    s1.clear();                  //.clear()
    cout<<"cleared ?%s? "<<s1<<" clear";

    // access string's elemets
    string elem;
    cin>>elem;
    cout<<elem[0]<<endl;
    cout<<elem.at(0)<<endl;
    cout<<elem.substr(1,2)<<endl;    // name.substr(x,y) ex. "Hello" >> "Hl"
                                     // x start position y chars cfr string costructor
    cout<<elem[elem.size()-1]<<endl;
    cout<<elem.back()<<endl;
    cout<<elem.front()<<endl;

    // Iterator it
   
    cout<<endl;
    // s.replace() - s.insert()
    s1.replace(4,3,"so");
    s1.insert(4,"so"); // a.replace(4,0,"so");
    cout<<s1<<endl;
    
    // Iterator it
    
    // string::iterator it; // 1) =auto
    // for(string::iterator it it=s.begin();it<s.end();it++)
    for(auto it=s1.begin();it<s1.end();it++)
    {
        cout<<*it<<" ";        
    }

    // string imput with [spaces]
    getchar(); // <<<<<<<<<<<<<<<<<<<<
    string s3;
    // cin.getline(s,100); char s[100];
    getline(cin,s3); // <<<<<<<<<<<<<<<<<<<<
    cout<<s3<<endl;
    

    return 0;
}
