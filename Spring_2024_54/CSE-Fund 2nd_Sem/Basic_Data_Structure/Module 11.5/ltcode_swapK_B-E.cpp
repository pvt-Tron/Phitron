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
ListNode* swapNodes(ListNode* head, int k) {
    if(head->next == NULL) return head;
    ListNode* tmpE = new ListNode(0);  
    // int* x = new int;
    if(head->next->next == NULL){
        // x = &head->val;
        tmpE->val = head->val;
        head->val = head->next->val;
        head->next->val = tmpE->val;
        // head->next->val = *x;
        return head;
    }
    int cnt = 1;
    ListNode* tmp = head;
    ListNode* tmpB = new ListNode(0);
    int flagEnd1 = 0;
    while(tmp->next != NULL){
        if(k == 1){
            tmpB = head;
            flagEnd1 = 1;
        }
        cnt++;
        tmp = tmp->next;
        if(cnt == k) tmpB = tmp;
    }
    if(flagEnd1) tmpE->val = tmp->val; //x = tmp->val; 
    else{
        if(k > cnt / 2){
            k = cnt - k;
            tmp = head;
            cnt = 1;
            while(cnt++ <= k) tmp = tmp->next;
        }
        else{
            tmp = tmpB;
            cnt = cnt - k;
            while(k <= cnt){
                tmp = tmp->next;
                k++;
            }
        }  // tmpE = tmp;
        tmpE->val = tmp->val; //   x = (tmp->val);
    }
    tmp->val = tmpB->val;
    tmpB->val = tmpE->val; // x; // delete x;
    return head;
}
// ListNode* swapNodes(ListNode* head, int k) {
//     if(head == NULL) return head;
//     if(head->next == NULL) return head;
//     int cnt = 1;
//     ListNode* tmp = head;
//     ListNode* tmpB = new ListNode(0);
//     ListNode* tmpE = new ListNode(0);
//     int flagEnd1 = 0;
//     while(tmp->next != NULL){
//         if(k == 1){
//             tmpB = head;
//             flagEnd1 = 1;
//         }
//         cnt++;
//         tmp = tmp->next;
//         if(cnt == k){
//             tmpB = tmp;
//         }
//     }
//     if(flagEnd1){
//         // tmpE = tmp;
//         tmpE->val = tmp->val;
//     }
//     else{
//         tmp = head;
//         k = cnt - k;
//         cnt = 1;
//         while(cnt <= k){
//             tmp = tmp->next;
//             cnt++;
//         }
//         // tmpE = tmp;
//         tmpE->val = tmp->val;
//     }
//     tmp->val = tmpB->val;
//     tmpB->val = tmpE->val;
//     return head;
// }
    // if(k = 1){
    //     // deleteNodeB = tmpB->next;
    //     // tmpB->next = tmpB->next->next;
    //     head = deleteNodeB->next;
    //     // deleteNodeE = tmp->next;
    //     tmp->next = tmp->next->next;
    // }
    // else{
    //     tmp = tmpB;
    //     int cnt2 = cnt - (k * 2);
    //     while(cnt2--){
    //         if(cnt == k) tmpE = tmp;
    //         tmp = tmp->next;
    //     }

    // }
    // delete deleteNodeB;
    // delete deleteNodeE;
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