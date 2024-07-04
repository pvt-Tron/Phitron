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
void insert_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;  // 
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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

int main()
{
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* tail;
    // tail = c;
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // a->prev = head;
    // b->prev = a;
    // c->prev = b;

    Node* head = NULL;
    Node* tail = NULL;

    int dlNsz = 0;
    dlNsz = size_N(head);
    int val;
    cin >> val;
    insert_head(head, tail, val);
    fpN(head);

    // int pos;
    // cin >> pos;
    // ins_pos(head , 1, 100);
    // fpN(head);
    // // dlNsz = prntN(head);
    // dlNsz = ptN_r(tail);
    // dlNsz = prtN(head);

    // if(pos == 0){
    //     insert_head(head, tail, val);
    // }
    // else if(pos == size_N(head)){
    //     insert_head(tail, val);
    // }    
    // else if(pos <= size_N(head)) cout << "Invalid " << endl;
    // else ins_pos(head, pos, val);
    return 0;
}