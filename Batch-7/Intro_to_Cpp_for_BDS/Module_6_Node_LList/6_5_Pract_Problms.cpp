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

// void inptNTail(Node* &head, Node* &tail,int x){
//     Node* newnode = new Node(x);
//     if(tail == NULL){
//         head->next = newnode;
//         tail = newnode;
//         return;
//     }
//     if(head->val == NULL){
//         head->val = x;
//         return;
//     }

// }
void inptNHead(Node* &head, int x){ //  Node* &tail,
    Node* newnode = new Node(x);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* tmp = head;
    // if(head->next = NULL){ // head = tmp
    //     head->next = newnode;
    //     return;
    // }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
int nodeSize(Node* head, int opt){
        if(head == NULL){
        cout << 0;
        return 0;
    }
    int cnt = 1;
    int frst = 0;
    Node* tmp = head;
    while(tmp->next != NULL){
        if(opt == 3){
            if(cnt > 1){
                int secnd = tmp->val;
                if(frst > secnd) return 1;
            }
            frst = tmp->val;
        }
        tmp = tmp->next;
        if(opt == 3 && tmp->next == NULL){
            int secnd = tmp->val;
            if(frst > secnd) return 1;
            else return 0;
        }
        cnt += 1;
    }
    if(opt == 1) return cnt;
    if(opt == 2) cout << cnt;
    return 0;
}
void prntdupNums(Node* head, int x, int opt){
    int cnt = 1;
    Node* tmp = head;
    while(tmp->next != NULL){
        if(cnt == x){
            if(opt == 1){
                cout << tmp->val;
                return;
            }
            else{
                cout << tmp->val << endl;
                tmp = tmp->next;
                cout << tmp->val;
                return;
            }
        }
        tmp = tmp->next;
        cnt += 1;
    }
}
int checkNums(vector<int> n, int x){
    for(int i = 0; i < n.size(); i += 1){
        if(n[i] == x) return 0;
    }
    return 1;
}
void dupliSLL(Node* head){
        if(head == NULL){
        cout << 0;
        return;
    }
    int cnt = 0;
    Node* tmp = head;
    Node* tmpD = head;
    int x = 0;
    int y = 0;
    vector<int> dupNums;
    while(tmpD->next != NULL){
        // cout << tmpD->val << "i ";
        int v = tmpD->val;
        if(checkNums(dupNums, v)){
            while(tmp->next != NULL){
                if(x != y){
                    if(tmp->val == tmpD->val){
                        int v = tmp->val;
                        if(checkNums(dupNums, v)) dupNums.push_back(v);
                        cnt += 1;
                        cout << y << "y " << x << "x " << tmpD->val << "i " << tmp->val << "j " << cnt << "D " << endl;
                    }
                }
                // cout << tmp->val << "j ";
                tmp = tmp->next;
                y += 1;
            }
        // if(tmp->val == tmpD->val && x != y) cnt += 1;
        }
        tmpD = tmpD->next;
        x += 1;
        y = 0;
        tmp = head;
    }
    cout << cnt;
}

int main()
{
    Node* head = NULL;
    int x;
    while(cin >> x){
        inptNHead(head, x);
    }
    // int res = nodeSize(head, 0); // Problem 1 OK!
    // dupliLL(head); // Problem 2 OK!
    // int n = nodeSize(head, 1); // Problem 3 OK!
    // if(n%2 != 0){
    //     n = n / 2 + 1;
    //     prntdupNums( head, n, 1);
    // }
    // else{
    //     n = n / 2;
    //     prntdupNums( head, n, 2);
    // }
    int n = nodeSize(head, 3); // Problem 4 OK!
    if(n) cout << "NO";
    else cout << "YES";

    return 0;
}