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
int size_N(Node* head){
    Node* tmp = head;
    int sz = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        sz++;
    }
    return sz;
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
void del_pos(Node* head , int pos){
    Node* tmp = head;    
    for(int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    deleteNode->next = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp; // ??  tmp->next->next->prev = tmp; 
    delete deleteNode;
}
void del_head(Node* &head, Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    head->prev = NULL;
}
void del_tail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
        if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail;
    tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    a->prev = head;
    b->prev = a;
    c->prev = b;

    // Node* head = NULL;
    // Node* tail = NULL;
    
    // dlNsz = prntN(head);
    // dlNsz = ptN_r(tail);
    // dlNsz = prtN(head);
    
    int dlNsz = 0;
    // dlNsz = size_N(head);

    int pos = 0;            // ll_d_ins_del_Position(pos)
    int val = 0;

    cin >> pos; // 1 pos
    // cin >> val; // 1 val
    cin >> pos; // 2 pos
    cin >> val; // 2 val
    // cin >> pos; // 3 pos
    // cin >> val; // 3 val
    cin >> pos;  // 4 pos
    // cin >> val; // 4 val

    // INSERT
    
    insert_tail(head, tail, val);       // Insert at tail // 20
    fpN(head);
    //insert_head(head, tail, val);     // Insert at head 
    // fpN(head);
    
    ins_pos(head , pos, val);           // Insert at position // 100 2
    // ins_pos(head , 1, 100);
    fpN(head);                  
    
    // DELETE

    // del_pos(head , pos);     // Delete at position // 1
    // fpN(head);

    // del_tail(tail);          // delete tail
    // fpN(head);
    // del_head(head);          // delete head
    // fpN(head);
    int t;
    cin >> t;
    while (t--){
        int opt = 0;
        int pos = 0;
        int val = 0;
        cin >> opt;
        if(opt == 1){ // ins at position
            cin >> val;
            cin >> pos;
        }
        else if(opt == 2) cin >> val; // ins at head
        else if(pos == 0){
            if(val) insert_head(head, tail, val);   // Insert at head
            else if(pos) del_head(head, tail);                    // delete head
        }
        else if(pos <= size_N(head)) cout << "Invalid " << endl;
        else if(pos == size_N(head) - 1){
            if(val) insert_tail(head, tail, val);
            else if(pos) del_tail(head, tail);            // delete tail
        }    
        else{
            if(val) ins_pos(head, pos, val);
            else if(pos) del_pos(head, pos);
        }
        fpN(head);
    }
    return 0;
}