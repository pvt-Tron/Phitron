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
class QueBuild
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int v){
        Node* newNode = new Node(v);
        sz++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL) tail = NULL;    
    }
    int front(){return head->val;}
    int size(){return sz;}
    bool empty(){
        if(sz) return false;
        else return true;
    }
};
int main()
{
    QueBuild q;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}