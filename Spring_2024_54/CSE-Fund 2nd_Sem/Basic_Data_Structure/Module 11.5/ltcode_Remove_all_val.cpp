#include<bits/stdc++.h>
using namespace std;
//Definition for singly-linked list.
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
ListNode* removeElements(ListNode* head, int val){
    if(head == NULL) return head;
    while(head->val == val){
        if(head->next == NULL){
            head = NULL;
            return head;
        }    
        ListNode* deleteNode = head->next;
        head->val = head->next->val;
        head->next = head->next->next;
        delete deleteNode;
    }
    if(head->next == NULL){
    if(head->val == val) head = NULL;
        return head;
    }
    ListNode* tmp = head;
    while(tmp->next != NULL){
        if(tmp->next->val == val){
            ListNode* deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
            if(tmp->next == NULL) break;
        }
        else tmp = tmp->next;
    }
    return head;
}

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
    removeElements(head, x1);
    //leetcode(head, x1); // call here Leetcode's function

    print_linekd_list(head);

    return 0;
}