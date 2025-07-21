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
// void insTail(Node* &head, Node* &tail, int v);
void insTailD(Node* &head, Node* &tail, int v);
void RevSLL(Node* &head, Node* &tail, Node* tmp);
void RevDLL(Node* head, Node* tail);

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(cin >> x){
        if(x == -1) break;
        insTail(head, tail, x);
    }
    RevSLL(head, tail, head);
    RevDLL(head, tail);
    return 0;
}

void RevSLL(Node* &head, Node* &tail, Node* tmp){
    // base case
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    RevSLL(head, tail, tmp->next);  //  send in stack head and following nodes till to
    tmp->next->next = tmp;   // tail is sent, 
    tmp->next = NULL;  // return tail as head followed by nodes that are `stacked`
    tail = tmp;        // in recursion staked in memory are Last In First Out
}                // LIFO O<<<<<<<In| opposite of queue that is FIFO In>>>>>>|O
void RevDLL(Node* head, Node* tail){
    for(Node *i= head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev){
        swap(i->val, j->val);
    }

}
void insTail(Node* &head, Node* &tail, int v){
    Node* newnode = new Node(v);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = tail;
    tmp->next = newnode;
    tail = newnode;
    return;
}
// void insTailD(Node* &head, Node* &tail, int v){
//     return;
// }