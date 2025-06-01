#include<bits/stdc++.h>
using namespace std;
typedef class Student{
    public:
        // string name;
        char name[100];  // 100 byte
        int roll;        // 4 byte
        double gpa;      // 8 byte
        // int age;
        // int marks[30];
        // int* ptr;
    
    Student() = default; // Student(); // Default Costructor

    Student(char nm[], int rl, double g){ // Costructor
        *name = *nm;
        roll = rl;
        gpa = g;
        // *marks = *mk;
    }
    
}Std_t;
int main()
{
    Std_t st1;
    st1.roll = 10;
    st1.gpa = 4.5;
    char tmp[101] = "Sakib";
    strcpy(st1.name, tmp);
    cout << st1.name << " " << st1.roll;
    cout << " " << st1.gpa << endl;
    Std_t st2;
    // cin >> st2.name >> st2.roll >> st2.gpa;
    cin.getline(st2.name, 100); // getline()
    cin >> st2.roll >> st2.gpa;
    cin.ignore(); // cin.ignore() to ignore "/n"
    
    cout << st2.name << " " << st2.roll;
    cout << " " << st2.gpa << endl;


    return 0;
}