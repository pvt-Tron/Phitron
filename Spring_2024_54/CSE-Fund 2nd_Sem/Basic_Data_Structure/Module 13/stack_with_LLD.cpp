#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class StackBuild
{
private:

public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    // list<int> l;
    // StackBuild(/* args */) {}
    // ~StackBuild() {}
    void push(int val){
        Node* newNode = new Node(val);
        sz++;
        if(head == NULL){
            head == newNode;
            tail == newNode;
            return;
        }
        // Node* tmp = head;
        // while(tmp != NULL){
        //     tmp = tmp->next;
        // }
        Node* tmp = tail;
        newNode->prev = tmp;
        tmp->next = newNode;
        tail = newNode;
        // newNode->prev = tail;
        // tmp->next = newNode;
        // tail = tail->next;
    }

    void pop(){
        if(head == NULL) return;
        sz--;
        if(tail == NULL){
            head == NULL;
            return;
        }
        tail->prev->next = NULL;
        tail = tail->prev;

        // Node* deleteNode = tail;
        // tail = tail->prev;
        // if(tail == NULL) head = NULL;
        // else tail->next = NULL;
        // delete deleteNode;
    }

    int top(){return tail->val;}

    int size(){return sz;}
        // int sz = 0;
        // Node* tmp = head;
        // while(tmp != NULL){
        //     tmp = tmp->next;
        //     sz++;
        // }
        // return sz;
    // }

    bool empty(){
        // if(size() == 0) return true;
        if(sz == 0) return true;
        else false;
        // v.empty();
    }
};
int main()
{
    StackBuild st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}