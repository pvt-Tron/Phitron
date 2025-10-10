#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

class QueueLL{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(){
        sz++;
    }
    void pop(){
        sz--;
    }
    
    int size(){
        return sz; 
    }
    
};

class lstQueue
{
// private:
    /* data */

    // implementing using Node LLs 
    // use sz++ sz-- for return size updated 
public:
    list<int> l; 
    void push(int val){
        return l.push_back(val);
    }
    void pop(){
        return l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
    int back(){
        return l.back();
    }
};

int main(){
    // stl Queue
    // lstQueue que;
    queue<int> que;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que.push(val);  // FIFO
    }
    cout << que.empty() << " " << que.size() << endl;
    // ?? // stk.emplace() << " " << stk.swap() << " " <<; // ??
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl << que.empty() << " " << que.size();

    return 0;
}