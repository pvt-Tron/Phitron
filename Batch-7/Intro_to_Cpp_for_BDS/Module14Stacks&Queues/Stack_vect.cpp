#include<bits/stdc++.h>
using namespace std;
class vectStack
{
// private:
    /* data */
public:
    vector<int> v;
    void push(int val){
        return v.push_back(val);
    }
    void pop(){
        return v.pop_back();
    }
    int top(){
        return v.front();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }

};

int main(){
    


    return 0;
}