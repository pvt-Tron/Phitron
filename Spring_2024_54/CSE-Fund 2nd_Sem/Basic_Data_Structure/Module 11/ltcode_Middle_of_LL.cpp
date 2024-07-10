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
// // ** */
// ListNode* middleNode(ListNode* head) {
//     ListNode* tmp = head;
//     if(head->next == NULL) return head;
//     int cnt = 0;
//     while(tmp != NULL){
//     cnt++;
//     tmp = tmp->next;
//     }
//     // if(cnt%2 == 0) cnt = (cnt / 2);
//     // else 
//     cnt = (cnt / 2);
//     tmp = head;
//     for(int i = 0; i < cnt; i++){
//         tmp = tmp->next;
//     }
//     return tmp;
// }
// ** 
// ListNode* middleNode(ListNode* head) {
//     ListNode* fast = head;
//     ListNode* slow = head;
//     if(head->next == NULL) return head;
//     while(slow != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// bool hasCycle(ListNode *head) {
//     if(head == NULL || head->next == NULL) return false;
//     ListNode* slow = head;
//     ListNode* fast = head;
//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast) return true;
//     }
//     return false;
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

// class Solution {
// public:

// };
    // delete at position
    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if(head == NULL) return head;
    //     if(n == 1){
    //         if(head->next == NULL) head = NULL;
    //         else {
    //             head->next->val = head->val;
    //             head = head->next;
    //         }
    //         return head;
    //     }
    //     // if(head->next->next == NULL){
    //     //     ListNode* deleteNode = head->next;
    //     //     delete deleteNode;
    //     //     head->next = NULL;
    //     //     return head;
    //     // }
        
    //     ListNode* tmp = head;
    //     // int cnt = 1;
    //     // while(tmp != NULL){
    //     //     cnt++;
    //     //     tmp = tmp->next;
    //     // }
    //     // tmp = head;
    //     // int flag = 1;
    //     // // if(n > cnt) return head;
    //     // // else 
    //     // if(n == cnt) flag = 0;
    //     for(int i = 1; i <= n; i++){
    //         if(tmp->next->next == NULL) break;    
    //         tmp = tmp->next;
    //     }
    //     ListNode* deleteNode = tmp->next;
    //     if(tmp->next->next == NULL) tmp->next = NULL;
    //     else{
    //         // tmp->val = tmp->next->val;
    //         tmp->next = tmp->next->next;
    //     }
    //     delete deleteNode;
    //     // if(head == NULL) return head;
    //     return head;
    // }
// int main(){

//     ListNode* head = NULL;
//     int val;
//     // cout << "Start" << endl;
//     while (true){
//         cin >> val;
//         if(val == -1) break;
//         // cout << val << " ";
//         insert_at_tail(head, val);
//     }
//     print_linked_list(head);

// }

// /**
// //     ListNode* deleteDuplicates(ListNode* head) {
// //         if(head == NULL) return head;
// //         ListNode* tmp = head;
// //         while(tmp->next != NULL){
// //             if(tmp->val == tmp->next->val) tmp->next = tmp->next->next;
// //             else tmp = tmp->next;
// //         }
// //         return head;
// //     }
// /**

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head == NULL) return head;
//         ListNode* tmp = head;
//         while(tmp->val == val){
//             ListNode* deleteNode = head;
//             tmp = head->next;
//             delete deleteNode;
//             head = tmp;
//             if(head == NULL) return head;
//         }
//         tmp = head;
//         while(tmp->next != NULL){
//             if(tmp->next->val == val){
//                 ListNode* deleteNode = tmp->next;
//                 if(tmp->next->next == NULL){
//                     delete deleteNode;
//                     tmp->next = NULL;
//                     break;
//                 } 
//                 else tmp->next = tmp->next->next;
//                 delete deleteNode;
//             }
//             tmp = tmp->next;
//         }
//         if(head->next == NULL){
//             if(head->val == val){
//                 head = NULL;
//                 return 0;
//             }
//             else return head;
//         }
//         else if(head->next->next == NULL){
//             if(head->next->val == val && head->val != val){
//                 ListNode* deleteNode = head->next;
//                 delete deleteNode;
//                 head->next = NULL;
//             }
//             else if(head->next->val == val && head->val == val){
//                 ListNode* deleteNode = head->next;
//                 delete deleteNode;
//                 head = NULL;
//                 return 0;
//             }
//             else{ 
//                 if(head->next->val == val){
//                     ListNode* deleteNode = head->next;
//                     delete deleteNode;
//                     head->next = NULL;
//                 }
//                 else if(head->val == val) head = head->next;
//             }
//             return head;
//         }

//     if(head == NULL) return head;
//     if(head->next->val == val) head->next = head->next->next;
//     tmp = head;
//     while(tmp->next != NULL){
//         if(tmp->next->val == val) tmp->next = tmp->next->next;
//         tmp = tmp->next;
//         if(tmp == NULL) break;
//     }

//     return head;

//     }
// };
// */

// class Solution {
// public:
//     int headck(ListNode* head, int val){
//         if(head == NULL || (head->val == val && head->next == NULL)) return 0;
//         else if(head->next == NULL && head->val != val) return 1;
//         else if(head->next == NULL) return 1;
//         else return 2;
//     }
//     ListNode* removeElements(ListNode* head, int val) {
//         int rt012 = headck(head, val);
//         if(rt012 == 0) return 0;
//         else if(rt012 == 1) return head;
//         ListNode* tmp = head;
//         // while(tmp->next->next != NULL){
//         //     if(tmp->next->val == val){
//         //         ListNode* deleteNode = tmp->next;
//         //         if(tmp->next->next != NULL) tmp->next = tmp->next->next;
//         //         else break;
//         // }
//         while(tmp->next != NULL){
//             if(tmp->next->val == val){
//                 ListNode* deleteNode = tmp->next;
//                 if(tmp->next->next != NULL) tmp->next = tmp->next->next;
//                 else break;
//                 delete deleteNode;
//             }
//             tmp = tmp->next;
//         }
//         while(tmp != NULL){
//             if(tmp == NULL) return head;
//             else if(tmp->next == NULL) break;
//             if(tmp->val == val){
//                 tmp->val = tmp->next->val;
//                 if(tmp->next->next != NULL) tmp->next = tmp->next->next;
//                 else{
//                     tmp->next = NULL;
//                     break;
//                 }
//             }
//             tmp = tmp->next;
//         }
//         rt012 = headck(head, val);
//         if(rt012 == 0) return 0;
//         else if(rt012 == 1) return head;
//         return head;
//     }
// };