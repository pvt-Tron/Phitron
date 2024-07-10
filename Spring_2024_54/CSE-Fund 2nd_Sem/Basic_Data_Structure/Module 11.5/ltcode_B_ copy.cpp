#include<bits/stdc++.h>
using namespace std;
//Definition for singly-linked list. Leetcode.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void insert_tail(ListNode *&head, ListNode *&tail, int val){
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void ins_tail2(ListNode* &head, int v){
    ListNode* newNode = new ListNode(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    ListNode* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return;
}
void print_linekd_list(ListNode *head){
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int print_lls_sz(ListNode* head){
    ListNode* tmp = head;
    int sizelkls = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
        sizelkls++;
    }
    cout << "Size: " << sizelkls << endl;
    return sizelkls;
}
void print_linekd_list(ListNode *head){
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// Start Solution

// paste ^^here^^ Leetcode's function  // End Solution

int main(){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int val = 0;
    while (true){
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
    
    int x1;
    cin >> x1;

    //leetcode(head, x1); // call here Leetcode's function
    int sizeSZ = print_lls_sz(head);
    // print_linekd_list(head);

    return 0;
}