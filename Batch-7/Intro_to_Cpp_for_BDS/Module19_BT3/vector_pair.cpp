#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
class BTnode
{
public:
    int val;
    BTnode *left;
    BTnode *right;
    BTnode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}; // Blueprint of Binary Tree Node

BTnode *input_tree(){
    int val;
    cin >> val;
    BTnode *root;
    if (val == -1) root = NULL;
    else root = new BTnode(val);
   
    queue<BTnode *> q;
    if (root) q.push(root);

    while (!q.empty()){   
        BTnode *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        BTnode *myLeft;
        BTnode *myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new BTnode(l);
        if (r == -1) myRight = NULL;
        else myRight = new BTnode(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

int main(){

    int n;
    cin >> n;
    vector<pair<int,int>> v(n);

    /* PAIR */
    pair<string,int> p;  // A pair of string and integer types is taken.
    p.first = "Hello"; // The first value of the pair can be accessed with .first.
    p.second = 2;     // The first value of the pair can be accessed with .second.
    cout << p.first << " " << p.second << endl;  // The pair is being printed.

    /* Vector <PAIR<dtype a,dtype b>> */
    vector<pair<string,int>> pv;
    pv = make_pair("Hello", 3);

    cout pv.first << " " << pv.second << endl;
    for(int i = 0; i < n; i ++){
        cin >> pv[i].first >> pv[i].second;
    }
    for(int i = 0; i < n; i ++){
        cout pv[i].first << " " << pv[i].second << endl;
    }

    vector<pair<BTnode<int>,int> parent; // 1st data type is Type BTnode*
    BTnode* BTnode = new BTnode(10);
    int level = 1;
    parent.push({BTnode->left, level});
    // to push a pair is used {} => { first , second }

    BTnode *root = input_tree();
    cout << maxHeight(root) << endl;

    return 0;
}
