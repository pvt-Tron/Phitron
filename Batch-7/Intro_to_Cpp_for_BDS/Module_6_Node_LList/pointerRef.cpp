#include<bits/stdc++.h>
using namespace std;

void func1(int* p)
{    
    int y = 200;
    p = &y;
    cout << "In func1 p :  " << *p << " " << &p << endl;

}
void func2(int* &p)
{    
    int y = 300;
    p = &y;
    cout << "In func2 p :  " << *p << " " << &p << endl;

}
void func3(int* p)
{    
    p = NULL;
    cout << "In func3 p :  " << *p << " " << &p << endl;
}
int main()
{
    int x = 10;
    int* p = &x;
    func1(p);
    cout << "In Main p after func1:  " << *p << " " << &p << endl;
    func2(p);
    cout << "In Main p after func2:  " << *p << " " << &p << endl;
    func3(p);
    cout << "In Main p after func3:  " << *p << " " << &p << endl;


    return 0;
}