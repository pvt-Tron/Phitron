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
int main()
{
    
    return 0;
}

// void delete_at_tail(Node* head){ // void delete_at_head(Node* &head, int pos){
//     Node* tmp = head;
//     while(tmp->next->next != NULL){
//         tmp = tmp->next;
//     }
//     Node* deleteNode = tmp->next->next;
//     tmp->next = tmp->next->next;
//     delete deleteNode;
//     cout << endl << endl << "Deleted head" << endl << endl;
// }