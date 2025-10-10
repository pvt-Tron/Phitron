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
        cout << endl << "Inserted at head" << endl << endl;
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
            cout << "Invalid Index !!" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "Inserted at position: " << pos << endl << endl;
}
void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);
    head = newNode;
    newNode->next = head;
    cout << endl << "Inserted at head" << endl << endl;
}
void delete_at_pos(Node* head, int pos){
    Node* tmp = head; // if(head == NULL){return;}  // if(pos == 0){
    for(int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid Index !!" << endl;
            return;
        }
    }
    if(tmp->next == NULL){
        cout << "Invalid Index !!" << endl;
        return;
    }
    Node* deleteNode =tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl << endl << "deleted at position: " << pos << endl << endl;
}
void delete_at_head(Node* &head){ // void delete_at_head(Node* &head, int pos){
    if(head == NULL){
        cout << endl << "Head not available" << endl;
        return;
    }
    Node* deleteNode =head;  // Node* tmp = head;
    head = head->next;
    delete deleteNode;
    cout << endl << endl << "Deleted head" << endl << endl;
}
void print_linked_list(Node* head){
    cout << endl;
    cout << "Your Linked List: ";
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;

    
    while (true){                
        cout << "Option 1: Insert at Tail" << endl;         // done
        cout << "Option 2: Print Linked List" << endl;      // done
        cout << "Option 3: Insert at any Position" << endl; // done
        cout << "Option 4: Insert at Head" << endl;         // done
        cout << "Option 5: Delete at any Position" << endl; // done
        cout << "Option 6: Delete at Head" << endl;         // done
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if(op == 1){
            int v;
            cout << "Please type value to insert:";
            cin >> v;
            insert_at_tail(head,v);
        }
        else if(op == 2){print_linked_list(head);}
        else if(op == 3){
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if(pos == 0) insert_at_head(head, v);
            else insert_at_pos(head, pos, v);
        }
        else if(op == 4){
            int v; 
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v); // insert_at_pos(head, 0, v);
        }
        else if(op == 5){
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            if(pos == 0) delete_at_head(head);
            else delete_at_pos(head, pos);
        }
        else if(op == 6){
            cout << "Enter position: ";
            delete_at_head(head); // delete_at_head(head, 0);
        }
        else if(op == 7){break;}
    }
    return 0;
}