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
class lstQueue{ 
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
class vectStack{
    public:
        vector<int> v;
        list<int> l; // == vector  l. <--  v.
    
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
    // implementing using Node LLs & DLLs
    // use sz++ sz-- for return size updated
int main()
{
    // stl Queue
    // lstQueue que;
    queue<int> que;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que.push(val);  // to me queue: LIFO;  stack: LILO; 
                        // queue: FIF0, LILO;  stack: LIFO; 
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