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
void print_linked_list(Node* head){
    Node* tmp = head;
    int sizelkls = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
        sizelkls++;
    }
    cout << "Size: " << sizelkls << endl;
}
int main(){

    Node* head = NULL;
    int val;
    // cout << "Start" << endl;
    while (true){
        cin >> val;
        if(val == -1) break;
        // cout << val << " ";
        insert_at_tail(head, val);
    }
    print_linked_list(head);

    return 0;
}