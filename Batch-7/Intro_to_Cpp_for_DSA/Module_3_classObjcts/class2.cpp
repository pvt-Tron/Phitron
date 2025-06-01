#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        // char name[100];  // 100 byte
        int roll;        // 4 byte
        int cls;
        double gpa;      // 8 byte

    Student() = default;
    Student(int r, int c, double g){ 
        // *nm = *name;
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student st1;
    st1.roll = 45;
    st1.cls = 5;
    st1.gpa = 3.2;
    Student st2(2,5,5.00);
    cout << st1.roll << " " << st1.cls;
    cout << " " << st1.gpa << endl;
    cout << st2.roll << " " << st2.cls;
    cout << " " << st2.gpa << endl;
    
    return 0;
}