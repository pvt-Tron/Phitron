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
void insert_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;  // 
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void ins_pos(Node* head , int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;    
    for(int i = 1; i <= pos; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}
int prntN(Node* head){
    Node* tmp = head;
    int sz = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
        sz++;
    }
    cout << endl;
    return sz;
}
int ptN_r(Node* tail){
    Node* tmp = tail;
    int sz = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
        sz++;
    }
    cout << endl;
    return sz;
}
int size_N(Node* head){
    Node* tmp = head;
    int sz = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        sz++;
    }
    return sz;
}

int prtN(Node* n){
    if(n->next == NULL) return ptN_r(n);
    else return prntN(n);
}
void fpN(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void rever_d(Node* &head, Node* tail){
    Node* i = head;
    Node* j = tail;
    while(i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    // rever_d(head, tail); call
}
int main()
{
    Node* head = new Node(10); // initialize
    Node* tail;
    node_int_tl(head, tail);
    
    int dlNsz = 0;      // size
    dlNsz = prtN(head);
    // dlNsz = prntN(head);
    // dlNsz = ptN_r(tail);
    // dlNsz = prtN(head);
    cout << dlNsz << endl;
    
    ins_pos(head , 1, 100);
    fpN(head);
    int pos;  // insert at position // valid position
    cin >> pos;
    if(pos >= size_N(head)) cout << "Invalid " << endl;
    cout << pos << endl;
    rever_d(head, tail); // reversed LL

    return 0;
}