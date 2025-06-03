#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string n, int r, int m, int e){
        name = n;
        roll = r;
        math  = m;
        english - e;
    }
    void hello(){
        cout << "hello from" << name << endl;
    }
    void total(){
        cout << "Total marks of" << name << " "<< math+english << endl;
    }
    
};
int main()
{
    Student sample("Sample", 23, 1, 2);
    sample.hello();
    sample.total();

    
    return 0;
}