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

Student func1(){  // <------ Return Object
    Student stx(3,7,4.00);
    return stx;
}

Student* fPtr(){ // <------ Return Object-> (Pointer)
    Student stx(3,7,4.00);
    Student* ptr = &stx;
    return ptr;
}


Student* fDynObj(){
    Student* stx = new Student(3,7,4.00);
    return stx;
}

int main()
{
    Student st1;
    st1.roll = 45;
    st1.cls = 5;
    st1.gpa = 3.2;
    cout << st1.roll << " " << st1.cls;
    cout << " " << st1.gpa << endl;

    Student st2(2,5,5.00);
    cout << st2.roll << " " << st2.cls;
    cout << " " << st2.gpa << endl;

    Student st3 = func1();
    cout << st3.roll << " " << st3.cls;
    cout << " " << st3.gpa << endl;

    Student* p = fPtr();
    cout << p->roll << " " << p->cls;
    cout << " " << p->gpa << endl;

    Student* st4 = new Student(10, 5, 4.2);
    // Student* st4a = new Student;
    cout << st4->roll << " " << st4->cls << " " << st4->gpa << endl;

    Student* dyc1 = fDynObj();
    cout << dyc1->roll << " " << dyc1->cls << " " << dyc1->gpa << endl;

    return 0;
}