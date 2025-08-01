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
class LstQueue
{ 
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
class VectStack
{
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

int main()
{
    VectStack stk1; 
    VectStack stk2;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk1.push(val);
    }
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk2.push(val);
    }
    if(stk1.size() != stk2.size()){
        cout << "NO";
        return 0;
    }
    while (!stk1.empty())
    {
        if(stk1.top() != stk2.top()){
            cout << "NO";
            return 0;
        }
        stk1.pop();
        stk2.pop();
    }
    if(true){
        cout << "YES"; 
        return 0; //                         // Problem 1 OK!
    }
    stack<int> stk2;
    queue<int> que2;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk2.push(val);
    }
    stack<int> stk1; 
    while (!stk2.empty()){
        stk1.push(stk2.top());
        stk2.pop();
    }
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que2.push(val);
    }
    if(stk1.size() != que2.size()){
        cout << "NO";
        return 0;
    }
    while (!stk1.empty())
    {
        if(stk1.top() != que2.front()){
            cout << "NO";
            return 0;
        }
        stk1.pop();
        que2.pop();
    }
    if(true){
        cout << "YES"; 
        return 0; //                         // Problem 2 OK!
    }

    stack<int> stk2;
    queue<int> que1;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk2.push(val);
    }
    stack<int> stk1; 
    while (!stk2.empty()){
        stk1.push(stk2.top());
        stk2.pop();
    }
    while (!stk1.empty()){
        cout << stk1.top() << " "; //      // Problem 3 OK!
        stk1.pop();
    }
    queue<int> que1;
    stack<int> stk2;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que1.push(val);
    }
    while (!que1.empty()){
        stk2.push(que1.front());
        stk2.pop();
    } 
    while (!stk2.empty()){
        que1.push(stk2.top());
        stk2.pop();
    }
    while (!que1.empty()){
        cout << que1.front() << " "; //      // Problem 4 OK!
        que1.pop();
    }
    
    return 0;
}