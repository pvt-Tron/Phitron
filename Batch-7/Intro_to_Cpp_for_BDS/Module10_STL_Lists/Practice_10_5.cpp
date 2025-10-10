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

void insTail(Node* &head, Node* &tail, int x){
    Node* newnode = new Node(x);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    // Node* tmp = tail;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int prnSz(Node* tmp, int sz, int opt){
    if(tmp == NULL){
        return sz;
    }
    if(opt == 1) cout << tmp->val << " ";
    prnSz(tmp->next, sz + 1, opt);
    if(opt > 1) cout << tmp->val << " ";
}
void reverseDLL(Node* &head, Node* &tail){
for(Node *i= head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev){
        swap(i->val, j->val);
    }
}
void sortDLL(Node* &head, Node* &tail){
for(Node *i= head, *j = i->next; i->next != NULL; i = i->next, j = j->next){
        if(i->val > j->val) swap(i->val, j->val);
    }
}
int isPalDLL(Node* &head, Node* &tail){
for(Node *i= head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev){
        if(i->val == j->val) continue;
        else return 0;
    }
    return 1;
}
void insDelPos(Node* &head, Node* &tail, int pos, int x){
    Node* newnode = new Node(x);
    int cnt = 1;
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        cnt += 1;
        if(cnt == pos) break;
    }
    
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while (cin>>x)
    {
        if(x == -1) break;
        insTail(head, tail, x);
    }
    // Node* tmp = head; // Problem 1 OK!
    // while (cin>>x)
    // {
    //     if(x == -1) break;
    //     if(tmp->val == x) continue;
    //     else{
    //         cout << "NO";
    //         return 0;
    //     }
    // }
    // cout << "YES";
    // return 0;
    // reverseDLL(head,tail); // Problem 2 OK!
    // int resP = isPalDLL(head, tail); // Problem 3 OK!
    // if(resP) cout << "YES";
    // else cout << "NO";
    // return 0;

    // int sz = 0;
    // int t;
    // cin >> t;
    // int cnt = 0;
    // while(t--){
    //     int pos, x;
    //     if(sz < pos){
    //         cout << "invalid";
    //         if(t > 0) cout << endl;
    //         continue;
    //     }
    //     else insDelPos(head, tail, pos, x);
    
    //     sz = prnSz(head, 0, 1);
    //     sz = prnSz(head, 0, 2);
    //     if(t > 0) cout << endl;
    // }
    // return 0;  // Problem 4 OK!
    sortDLL(head, tail);
    int sz = 0;
    sz = prnSz(head, 0, 1); // Problem 5 OK!
        
    return 0;
}