#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void search(Node *head, int x)
{
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
void min_max(Node *head)
{
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
int is_pal(Node *head)
{
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
    //( v1 == r1) ? cout << "Palindorme" : cout << "Palindorme";
    // Node * fb = head;
    // Node *te = tail;
    // while (tmp != NULL)
    // {
    //     if(fb->val != te){
    //         pal = 1;
    //         break;
    //     }
    //     tmp = tmp->next;
    // }
    // (pal == 1) ? cout << "Palindorme" : cout << "Palindorme";
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    int x;
    // x = 20; 
    cin >> x;
    search(head, x);
    is_pal(head);

    print_linekd_list(head);
    return 0;
}