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
void print_ll(Node* head){
    Node* tmp;
    tmp = head;
    while(tmp->next != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void comp_ll(Node* head, int sz){
    Node* tmp;
    vector<int> v1(sz);
    tmp = head;
    for(int i = 0; i < sz; i++){
        v1[i] = tmp->val;
        tmp = tmp->next;
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i < sz - 1; i++){
        if(v1[i] == v1[i + 1]){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
    return;
}
int main()
{
    Node* head = NULL;
    int val;
    int szll1 = 0;
    while(true){
        cin >> val;
        if(val == -1) break;
        szll1++;
        input_ll(head, val);
    }
    // cout << "inp "; 
    comp_ll(head, szll1); // NlogN !!
    cout << endl;
    
    return 0;
}