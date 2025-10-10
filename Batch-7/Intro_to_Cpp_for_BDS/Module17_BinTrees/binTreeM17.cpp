#include<bits/stdc++.h>
using namespace std;

class btNode{
    public:
        int val;
        btNode* left;
        btNode* right;

    btNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(btNode* root){
    if(root == NULL){
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(btNode* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(btNode* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}


int main()
{
    btNode* root = new btNode(10);
    btNode* a = new btNode(20);
    btNode* b = new btNode(30);
    btNode* e = new btNode(40);
    btNode* d = new btNode(50);
    btNode* e = new btNode(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    preorder(root);
    inorder(root);
    postordr(root);

    return 0;
}
