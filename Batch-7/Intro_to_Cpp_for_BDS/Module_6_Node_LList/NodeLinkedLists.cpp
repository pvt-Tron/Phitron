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
void prntNodes(Node* head){
    // if(head->next == NULL) return;
    // // Node* tmp = new Node(head->val);
    // // tmp->next = head->next;
    // Node* tmp = head;
    // while(tmp->next != NULL){
    //     cout << tmp->val << " ";
    //     if(tmp->next == NULL) return;
    //     tmp = tmp->next;
    // }
    // while (head != NULL)
    // {
    //     cout << head->val << " ";
    //     tmp = head->next;
    // }
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void ins_at_tailOld(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        head->next = tail;
        return;
    }
    if(tail->val == NULL){
        tail = newnode;
        head->next = tail;
        return; 
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tail->next = newnode; //   tail stored newnode
    tail = newnode;      //    tail can be reassigned
}
void ins_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        // head->next = tail;
        tail = newnode;
        return;
    }
    if(tail->val == NULL){
        tail = newnode;
        head->next = tail;
        return; 
    }
    tail->next = newnode;  //   tail stored newnode
    // tail = tail->next;  //   tail can be reassigned
    tail = newnode;
}
int ins_at_pos(Node* &head, Node* &tail, int val, int pos){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        head->next = tail;
        return;
    }
    if(tail->val == NULL){
        tail = newnode;
        head->next = tail;
        return; 
    }
    Node* tmp = head;
    
    // int i = 0;
    // while (i < pos)
    // {
    //     if(tmp->next != NULL) return 1;
    //     tmp = tmp->next;
    //     i += 1;
    // }
    
    for(int i = 1; i < pos; i += 1){
        if(tmp->next != NULL) return 1;
        tmp = tmp->next;
    }

    if(tmp->next == NULL){
        tmp->next = newnode;
        tail = newnode;
        return 0;
    }
    newnode->next = tmp->next;
    tmp->next = newnode; 

    return 0;
} 
void ins_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->next = head; //   head is stored
    head = newnode;      //    head can be reassigned
}                       // new head = newnode
int main()
{
    // Node* head = NULL;    //-> Node* Ops Time Complexity:
                              //  1. print Linked List O(N)
    Node* head = new Node(0); //  2. insert at head O(1)
    Node* tail = new Node(0); //  3. insert at tail O(1) old O(N*N?)
    // (*head).next = a;      //  4. insert at pos O(logN) O(N)
    head->next = tail;        //  - 
                              //  -  
    ins_at_head(head,100);    //  - 
                              //  ------------------------
    // ins_at_tailOld(head, tail,200);
    ins_at_tail(head, tail,200);
    
    int check = ins_at_pos(head, tail, 300, 2);
    if(check) cout << " Insert Index out of range " << endl;
    
    prntNodes(head);

    return 0;
}
