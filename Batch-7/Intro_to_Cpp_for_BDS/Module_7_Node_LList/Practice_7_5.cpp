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
void inptTail(Node* &head, Node* &tail, int v){
    Node* newnode = new Node(v);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int prntSLL(Node* tmp, int cnt, int opt){
    if(tmp == NULL){
        return cnt;
    }
    if(opt == 1) cout << tmp->val << " ";
    prntSLL(tmp->next, cnt + 1, opt);
    if(opt == 2) cout << tmp->val << " ";
}
int maxVal(Node* tmp){
    if(tmp == NULL){
        return 0;
    }
    int maxL = 0;
    while(tmp != NULL){
        if(maxL < tmp->val) maxL = tmp->val;
        tmp = tmp->next;
    }
    return maxL;
}
int insertPos(Node* &head, Node* &tail, int pos, int v){
Node* newnode = new Node(v);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return 1;
    }
    if(pos == 0){
        newnode->next = head;
        head = newnode;
        return 0;
    }
    Node* tmp = head;
    int i = 1;
    while(i < pos){
        i += 1;
        tmp = tmp->next;
        if(tmp == NULL) return 1;
    }
    if(tmp->next == NULL){
        tail->next = newnode;
        tail = newnode;
        return 0;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    return 0;
}
void sortSLL(Node* &head, Node* &tail){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val < j->val) swap(i->val, j->val);
        }
    }
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int x;
    while(cin >> x){
        if(x == -1) break;
        inptTail(head1, tail1, x);
    }
    // while(cin >> x){
    //     if(x == -1) break;
    //     inptTail(head2, tail2, x);
    // }
    // int s1 = prntSLL(head1, 0, 0);   // Problem 1 OK!
    // int s2 = prntSLL(head2, 0, 0); 
    // if(s1 == s2) cout << "YES";
    // else cout << "NO";
    // int s1 = prntSLL(head1, 0, 2);   // Problem 2 OK!
    // int res = maxVal(head1); //  Problem 3 OK!
    // cout << res;
    // int t;
    // cin >> t;
    // while(t--){
    //     int x, y;
    //     cin >> x >> y;
    //     int res = insertPos(head1, tail1, x, y); //  Problem 4 OK!
    //     if(res) cout << "Invalid";
    //     else int prnt = prntSLL(head1, 0, 1);
    //     if(t > 0) cout << endl;
    // }
    sortSLL(head1, tail1);
    int prnt = prntSLL(head1, 0, 1);  //  Problem 5 OK!

    return 0;
}