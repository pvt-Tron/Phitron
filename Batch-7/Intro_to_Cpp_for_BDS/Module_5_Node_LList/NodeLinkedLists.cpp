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
    if(head->next == NULL) return;
    // Node* tmp = new Node(head->val);
    // tmp->next = head->next;
    Node* tmp = head;
    while(tmp->next != NULL){
        cout << tmp->val << " ";
        if(tmp->next == NULL) return;
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = new Node(10); // 
    Node* a = new Node(10);
    // (*head).next = a;
    head->next = a;

    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        head = tmp->next;
    }
    // while (head != NULL)
    // {
    //     cout << head->val << " ";
    //     head = head->next;
    // }

    return 0;
}
/*
    Extra Problems' Answers:
    a. Sequential array use less memory
    b. Fixed: a) Size  b) Allocated memory. Then c) is Sequential
    c. 5
    d. 1020
    e. 1
    f. 13


*/