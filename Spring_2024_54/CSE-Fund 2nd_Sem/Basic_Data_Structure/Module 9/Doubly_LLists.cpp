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
        }
};
void node_int_tl(Node* &head, Node* &tail){
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    a->prev = head;
    b->prev = a;
    c->prev = b;
}
int prntN(Node* head){ // int&
    Node* tmp = head;
    // int* sz = new int;
    // sz = 0;
    int sz = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
        sz++;
    }
    cout << endl;
    return sz;  // *sz
}
int ptN_r(Node* tail){ // int&
    Node* tmp = tail;
    // int* sz = new int;
    // sz = 0;
    int sz = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
        sz++;
    }
    cout << endl;
    return sz;  // *sz
}
int prtN(Node* n){
    // int* pnt = new int;
    int szx = 0;
    if(n->next == NULL) szx = ptN_r(n);
    else szx = prntN(n);
    // int* sz = new int; // int* sz = new int(*pnt);
    // int sz = &pnt;
    // delete pnt;
    // return *pnt;
    // return *sz;
    return szx;
}

int main()
{
    Node* head = new Node(10);
    Node* tail;
    int dlNsz = 0;
    node_int_tl(head, tail);
    dlNsz = prtN(head);
    cout << dlNsz << endl;
    return 0;
}