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

int main()
{
    Node* head = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        input_ll(head, val);
    }
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j->next != NULL;  j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    return 0;
}