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
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head == NULL) return head;
    if(head->next == NULL){
        head = NULL;
        return head;
    } 
    if(head->next->next == NULL){
        if(n == 1) head->next = NULL;
        else head = head->next;        
        return head;
    }
    ListNode* tmp = head;
    int cnt = 1;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    tmp = head;
    int flag = 1;
    // if(n > cnt) return head;
    // else 
    // if(n == cnt) flag = 0;
    if(n - cnt == -1){
        head = head->next;
        return head;
    }
    for(int i = 1; i < cnt - n - 1; i++){
        // if(tmp->next->next == NULL) break;
        tmp = tmp->next;
    }
    ListNode* deleteNode = tmp->next;
    if(tmp->next->next == NULL) tmp->next = NULL;
    else tmp->next = tmp->next->next;
        // tmp->val = tmp->next->val;
    delete deleteNode;
    // if(head == NULL) return head;
    return head;
}
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
    
    print_linekd_list(head);

    return 0;
}