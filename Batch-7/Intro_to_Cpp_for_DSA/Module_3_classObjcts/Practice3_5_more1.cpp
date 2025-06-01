#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
	char name[101];
	int roll = 0;
	int section = 0;
	int math_marks = 0;
	int cls = 0;
    Student(int r, int s, int m, int c){
        // name[101] = n;
	    roll = r;
	    section = s;
	    math_marks = m;
	    cls = c;
    }
};
int main()
{
    Student st1(10, 20, 30 , 40);
    char tmp[101] = "pino";
    strcpy(st1.name, tmp);
    
    Student st2(1, 2, 31 , 4);
    char tmp[101] = "pina";
    strcpy(st1.name, tmp);
    
    Student st3(100, 21, 3 , 10);
    char tmp[101] = "pinu";
    strcpy(st1.name, tmp);
    int max = 0;
    int id = 0;
    if(st1.math_marks > st2.math_marks){
        max = st1.math_marks;
        id = 1;
    }
    else{
        max = st2.math_marks;
        id = 2;
    }
    if(st3.math_marks > max){
        max = st3.math_marks;
        id = 3;
    }
    if(id == 1) cout << st1.name;
    if(id == 2) cout << st2.name;
    if(id == 3) cout << st3.name;
    
    return 0;
}