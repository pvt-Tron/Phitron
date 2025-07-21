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
    newnode->prev = tail;
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
    newnode->prev = tail;
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
    newnode->next = tmp;
    tmp->prev = newnode;
    head = newnode;;
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
int printSLLrev(Node* tmp, int sz, int opt){
    // base case
    if(tmp == NULL){  // recursion opt 0/1 return size
        return sz;    // call printSLLrev(head, 0, 0); print
                      // call printSLLrev(head, 0, 1); reverse print
    
    if(opt == 0) cout << tmp->val << " ";}
    printSLLrev(tmp->next, sz + 1, opt);
    if (opt)cout << tmp->val << " ";
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
        newnode->prev = tail;
        tail = newnode;
        return;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
    
    return;
}
void delete_pos(Node* &head, Node* &tail, int pos){
    if(head == NULL){
        return;
    }
    if(pos == 0){
        Node* deletenode = head;
        head->next->prev = NULL;
        delete deletenode;
        head = head->next;
        return;
    }
    Node* tmp = head;
    for(int i = 1; i < pos; i += 1){
        if(tmp->next == NULL) return;
        tmp = tmp->next;
    }
    if(tmp->next == NULL){
        Node* deletenode = tmp->next;
        delete deletenode;
        tail = tmp;
        return;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->next->prev = tmp;
    delete deletenode;
    return;
}
void pop_headDSL(Node* &head, Node* &tail){
    Node* tmp = head->next;
    Node* deletenode = head;
    delete deletenode;
    head = tmp;
    if(head == NULL){
        tail == NULL;
        return;
    }
    head->prev = NULL;
}

void pop_tailDSL(Node* &head, Node* &tail){
    if(head == NULL){
        tail == NULL;
        return;
    }
    Node* tmp = tail;
    Node* deletenode = tmp;
    tail = tail->prev;
    delete deletenode;
    tail->next = NULL;
}

void printDLL(Node* head){    
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
void printRDLL(Node* tail){
    if(tail == NULL){
        return;
    }
    Node* tmp = tail;
    while(tmp->prev != NULL){
        cout << tmp->val;
        if(tmp->prev->prev != NULL) cout << " ";
        tmp = tmp->prev;
    }
}
void sortDSL(Node* head){
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
    printDLL(head);
    cout << endl;
    // delete_pos(head, tail, 2);
    // pop_tailDSL(head, tail);
    // sortDSL(head);
    // printDLL(head);
    // printDLLrev(head);

    return 0;
}