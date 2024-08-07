#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void search(Node *head, int x){
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val == x){
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }
    if(flag) cout << "Yes";
    else cout << "No";
    cout << endl;
}
void min_max(Node *head){
    int mn = INT_MAX;
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val < mn){
            mn = tmp->val;
        }
        
        if(tmp->val > mx){
            mx = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << "Min: " << mn << " Max: " << mx;
    cout << endl;
}
int is_pal(Node *head){
    vector<int> v1;
    int pal = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        v1.push_back(tmp->val);
        tmp = tmp->next;
    }
    vector<int> r1;
    r1 = v1;
    reverse(r1.begin(), r1.end());
    if(v1 == r1) cout << "Yes";
    else cout << "No";
    cout << endl;
}
void del_xLL(Node *head, int x){
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val == x){
            Node* deletenode = tmp->next;
            tmp->next = tmp->next->next;
            // x = NULL;
            delete deletenode;
            flag++;
            break; // remove for multiple delete
        }
        tmp = tmp->next;
    }
    if(flag) cout << "Deleted " << flag << "value(s): " << x;
    else cout << "Not found";
    cout << endl;
}
void del_xLL2(Node *head, int x){
    if(head->val == x){
        head = head->next;
        return;
    }
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->next->val == x){
            Node* deletenode = tmp->next;
            tmp->next = tmp->next->next;
            delete deletenode;
            break;
        }
        tmp = tmp->next;
    }
}
void reverse(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
        // reverse(head, head); call
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true){
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int x;
    cin >> x;
    search(head, x);
    is_pal(head);
    del_xLL(head, x);
    reverse(head, head); //
    print_linekd_list(head);
    // Sort
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j->next != NULL;  j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    return 0;
}