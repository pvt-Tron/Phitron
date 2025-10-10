#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
        int val;
        BTnode* left;
        BTnode* right;

    BTnode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(BTnode* root){
    if(root == NULL){
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(BTnode* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(BTnode* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
void level_order(BTnode* root){
    if(roor == NULL){
        cout << "No Tree" << endl;
        return;
    }
    queue<BTnode*> q;
    q.push(root);
    while(!q.empty()){

        // 1. pick front and pop it
        BTnode* f = q.front();
        q.pop();

        // 2. Work the node
        cout << f->val << " ";

        // 3. children push
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}

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
        if(p->left != NULL)
            q.push(p->left);
        if(f->right != NULL)
            q.push(p->right);
    }
    return root;
}

int cntBTnode(BTnode root){
    if(root == NULL){
        return 0;
    }
    int l = cntBTnode(root->left);
    int r = cntBTnode(root->right);
    return l + r + 1;
}
int cntLeafBTnode(BTnode root){
    if(root == NULL){
        return 0;
    }
    if(root->keft == NULL && root->right == NULL){
        return 1;
    }
    int l = cntLeafBTnode(root->left);
    int r = cntLeafBTnode(root->right);
    return l + r;
}
int maxHeight(Node* root){ // Height/Depth
    if(root == NULL){
        return 0;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r) + 1;
}


int main()
{
//    BTnode* root = new BTnode(10);
//    BTnode* a = new BTnode(20);
//    BTnode* b = new BTnode(30);
//    BTnode* e = new BTnode(40);
//    BTnode* d = new BTnode(50);
//    BTnode* e = new BTnode(60);
//
//    root->left = a;
//    root->right = b;
//    a->left = c;
//    b->left = d;
//    b->right = e;
//    preorder(root);
//    inorder(root);
//    postordr(root);

    BTnode root = inptBTree();

    level_order(root);
    cout << cntBTnode(root);

    cntLeafBTnode(root);
    cout << cntLeafBTnode(root);

    return 0;
}
