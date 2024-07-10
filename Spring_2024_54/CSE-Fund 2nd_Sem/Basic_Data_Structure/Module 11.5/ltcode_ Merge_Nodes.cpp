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
ListNode* mergeNodes(ListNode* head) {
    ListNode* tmp = head;
    while(tmp->next != NULL){
        tmp->val = (tmp->val + tmp->next->val);
        tmp->next = tmp->next->next;
        if(tmp->next->next != NULL && tmp->next->val == 0) tmp = tmp->next;
        else if(tmp->next->next == NULL){
            tmp->next = NULL;
            break;
        }
    }
    return head;
}
// ListNode* mergeNodes(ListNode* head) {
//     ListNode* tmp = head;
//     ListNode* deleteNode;
//     while(tmp->next != NULL){
//         deleteNode = tmp->next;
//         tmp->val = (tmp->val + tmp->next->val);
//         tmp->next = tmp->next->next;
//         delete deleteNode;
//         if(tmp->next->next == NULL){
//             deleteNode = tmp->next;
//             tmp->next = NULL;
//             delete deleteNode;
//             break;
//         }
//         else if(tmp->next->val == 0) tmp = tmp->next;
//         if(tmp->next == NULL) break;
//     }
//     return head;
// }
// ListNode* mergeNodes(ListNode* head) {
//     if(head == NULL ||head->next == NULL || head->next->next == NULL) return head;
//     ListNode* tmp = head;
//     ListNode* deleteNode;
//     while(tmp->next != NULL){
//         if(tmp->val == 0){
//             while(tmp->next != NULL && tmp->next->val != 0){
//                 deleteNode = tmp->next;
//                 tmp->val = (tmp->val + tmp->next->val);
//                 tmp->next = tmp->next->next;
//                 delete deleteNode;
//                 if(tmp->next->next == NULL){
//                     deleteNode = tmp->next;
//                     tmp->next = NULL;
//                     delete deleteNode;
//                 }
//             }
//         }
//         if(tmp->next == NULL) break;
//         else tmp = tmp->next;
//     }
//     return head;
// }
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