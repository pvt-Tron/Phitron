#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
        int data;
        BTnode* left;
        BTnode* right;

    BTnode(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
BTnode inptBTree(){ /* 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1 */

    int val;
    cin >> val; // 1st input val = 10

    if(val == -1) root == NULL;
    else BTnode* root = new BTnode(val);

    queue<BTnode*> q;

    if(root) q.push(root); // else skip while and return root = NULL
    while(!q.empty()){

        // 1. pick front and pop it
        BTnode *p = q.front();
        q.pop();

        // 2. Work the node
        int l, r;
        cin >> l >> r;              // 2nd input l = 20 r = 30
        BTnode *myleft, *myright;   // 3rd input l = 40 r = -1
        if(l == -1) myleft = NULL;  // -1 set 1 leaf r=null
        else myleft = new BTnode(l);
        if(r == -1) myright = NULL;
        else myright = new BTnode(r);

        p->left =  myleft;
        p->right = myright;

        // 3. children push
        if(p->left != NULL) q.push(p->left);
        if(f->right != NULL) q.push(p->right);
    }
    return root;
}
// Level Order

void level_order(BTnode* root){
    queue<BTnode*> q;
    q.push(root);
    while(!q.empty()){
        BTnode* f = q.front();                 // 1.
        q.pop();

        cout << f->data                        // 2.

        if(p->left != NULL) q.push(p->left);   // 3.
        if(f->right != NULL) q.push(p->right);
    }
}
// Phitron Insert

void insBT(BTnode* root, int val){
    if(root == NULL){
        root = new BTnode(val);
    }
    if(root->val > val){
        if(root->left == NULL) root->left = new BTnode(val);
        else insBT(root->left, val);
    }
    else{
        if(root->right == NULL) root->right = new BTnode(val);
        else insBT(root->right, val);
    }

}
// Convert Arr to BST
BTnode* convBTS(int ar[], int n, int l, int r){
    if(l > r) return NULL;
    int mid = (l+r)/2;
    BTnode  root = new BTnode(ar[mid]);
    BTnode* leftroot = convBTS(ar,n,l,mid - 1);
    BTnode* rightroot = convBTS(ar,n,mid + 1,r);
    root->left = leftroot;
    root->right = rightroot;

}

int main(){

    BTnode* root = inptBTree();
    int val;
    cin >> val;
    insert(root, val);
    level_order(root);

    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    convBTS(ar, n, 0, n - 1);

    return 0;
}
