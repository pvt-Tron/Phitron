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
void input_ll(Node* &head, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp;
    tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void inpt_hd_tl(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void pnt_recurs(Node* n){
    if(n == NULL) return;
    cout << n->val << " ";
    pnt_recurs(n->next);
}
void pnt_reverse(Node* n){
    if(n == NULL) return;
    pnt_reverse(n->next);
    cout << n->val << " ";
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    head->next = tail;

    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        inpt_hd_tl(head, tail, val);
        //input_ll(head, val);
    }
    pnt_recurs(head);
    pnt_reverse(head);
    return 0;
}