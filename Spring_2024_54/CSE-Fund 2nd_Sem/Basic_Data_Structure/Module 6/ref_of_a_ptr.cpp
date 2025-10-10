#include<bits/stdc++.h>
using namespace std;
void fun(int *&p){
      // *&p riceve l'ibndirizzo di meomria
      // e modifica il valore di 'val' in NULL
    // *p = 20;
    p = NULL;
    cout << p << endl;
    cout << &p << endl;
    return;
}
int main()
{
    int val = 10;
    int* ptr = &val;
    
    fun(ptr);
    
    cout << *ptr << endl;
    cout << ptr << endl;

    return 0;
}