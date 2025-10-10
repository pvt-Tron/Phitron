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
void insert_at_tail(Node* &head, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return;
}
void insert_at_pos(Node* &head, int pos, int v){
    Node* newNode = new Node(v);
    // if(head == NULL){ // if(pos == 0){
    //     head = newNode;
    //     cout << endl << "Inserted at head" << endl << endl;
    //     return;
    // }
    Node* tmp = head;
    for(int i = 0; i <= pos; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);
    head = newNode;
    newNode->next = head;
}
void delete_at_pos(Node* head, int pos){
    Node* tmp = head; // if(head == NULL){return;}  // if(pos == 0){
    for(int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            return;
        }
    }
    if(tmp->next == NULL){
        return;
    }
    Node* deleteNode =tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_at_head(Node* &head){ // void delete_at_head(Node* &head, int pos){
    if(head == NULL){
        return;
    }
    Node* deleteNode =head;  // Node* tmp = head;
    head = head->next;
    delete deleteNode;
}
void print_linked_list(Node* head){
    cout << endl;
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){

    int val;
    Node* head = NULL;
    while (true){
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}