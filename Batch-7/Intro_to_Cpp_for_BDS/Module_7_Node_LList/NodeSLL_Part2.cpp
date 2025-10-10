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

// void inptNTail(Node* &head, Node* &tail, int x){
//     Node* newnode = new Node(x);
//     if(tail == NULL){
//         head->next = newnode;
//         tail = newnode;
//         return;
//     }
//     if(head->val == NULL){
//         head->val = x;
//         return;
//     }

// }

void inptNTailT(Node* &head, Node* &tail, int x){
    Node* newnode = new Node(x);
    if(tail == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tail->next = newnode;
    tail = newnode;    

}
void inptNTail(Node* &head, Node* &tail, int x){
    Node* newnode = new Node(x);
    if(tail == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void inptNHead(Node* &head,Node* &tail, int x){ //  Node* &tail,
    Node* newnode = new Node(x);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = head;
    // if(head->next = NULL){ // head = tmp
    //     head->next = newnode;
    //     return;
    // }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
int nodeSize(Node* head, int opt){
        if(head == NULL){
        cout << 0;
        return 0;
    }
    int cnt = 1;
    int frst = 0;
    Node* tmp = head;
    while(tmp->next != NULL){
        if(opt == 3){  /*                   cout mid               */
            if(cnt > 1){
                int secnd = tmp->val;
                if(frst > secnd) return 1;
            }
            frst = tmp->val;
        }
        tmp = tmp->next;
        if(opt == 3 && tmp->next == NULL){
            int secnd = tmp->val;
            if(frst > secnd) return 1;
            else return 0;
        }
        cnt += 1;
    }
    if(opt == 1) return cnt;   /*            return size            */
    if(opt == 2) cout << cnt;  /*            print size            */
    return 0;
}
void printSLLrev(Node* tmp){
    // base case
    if(tmp == NULL){
        return;
    }
    printSLLrev(tmp->next);
    cout << tmp->val << " ";
}
void ins_at_pos(Node* &head, Node* &tail, int val, int pos){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
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
        if(tmp->next == NULL) return;
        tmp = tmp->next;
    }
    if(tmp->next == NULL){
        tmp->next = newnode;
        tail = newnode;
        return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode; 
    return;
}
void delete_pos(Node* &head, Node* &tail, int pos){
    if(head == NULL){
        return;
    }
    if(pos == 0){
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        return;
    }
    Node* tmp = head;
    for(int i = 1; i < pos; i += 1){
        if(tmp->next == NULL) return;
        tmp = tmp->next;
    }
    if(tmp->next == NULL){
        Node* deletenode = tmp->next;
        tmp = tail;
        delete deletenode;
        return;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    return;
}

void pop_tailSSL(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node* tmp = head;
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next->next;
    tmp->next = NULL;
    tail = tmp;
    delete deletenode;
}

void printSLL(Node* head){    
    if(head == NULL){
        return;
    }
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val;
        if(tmp->next != NULL) cout << " ";
        tmp = tmp->next;
    }
}
void sortSSL(Node* head){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            // int x = i->val;
            // int y = j->val;
            // if(x < y){
            //     i->val = y;
            //     j->val = x;
            // }
            if(i->val > j->val) swap(i->val, j->val);
        }
    }

}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    // while(cin >> x){
    //     inptNHead(head, tail, x);
    // }
    while(true){
        cin >> x;
        if(x == -1) break;
        // inptNHead(head, tail, x);
        inptNTail(head, tail, x);
    }
    printSLL(head);
    cout << endl;
    // delete_pos(head, tail, 2);
    // pop_tailSSL(head, tail);
    sortSSL(head);
    printSLL(head);
    // printSLLrev(head);

    return 0;
}
