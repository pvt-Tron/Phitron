  /*----------------------------------*/
 /*       Phitron.io/Code360         */
/*----------------------------------*/
#include <bits/stdc++.h>
using namespace std;

/*  template <typename T>  */
class BTnode
{
public:
    int val;       // T data;
    BTnode *left;  // BTnode<T> *left;
    BTnode *right; // BTnode<T> *right;
    // bool isOriginal;
    /* Constructors:
        BTnode(): int val, left(nullptr), right(nullptr) {}; // Default
        BTnode(int x): val(x), left(nullptr), right(nullptr) {}; // Value Only
        BTnode(int x, BTnode left, BTnode right): val(x), left(left), right(rigth) {}; // Full
    */
    BTnode(int val){    // Standard(this)
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

BTnode *input_tree()
{
    int val;
    cin >> val;
    BTnode *root;
    if (val == -1)
        root = NULL;
    else
        root = new BTnode(val);
    queue<BTnode *> q;
    if (root)
        q.push(root);
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
        
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// --  Left View  -- //
vector<int> getLeftView(TreeNode<int> *root){
    bool frq[3005] = {false}; /* We are taking a boolean array to understand
        whether a level has been visited for the first time. Its size is given
        according to the constraint of the question. */
    // A pair type queue is taken to store nodes and levels.
    queue<pair<TreeNode<int> *, int>> q;
    if (root) q.push({root, 1});
   /* The root is being pushed to the queue with level 1. The nodes of the left
      view are asked to be returned in a vector, so the vector is taken.*/
    vector<int> v;
    while (!q.empty()){
        pair<TreeNode<int> *, int> pr = q.front();   
        q.pop();
        TreeNode<int> *node = pr.first;  // The first element of the pair is the node.
        int level = pr.second;           // The second is the level.
   /* If the value of this level in the array is false, it means that this level
      has not been visited before. */
        if (frq[level] == false){ // Since this is the first node of this level,
            v.push_back(node->data); // it is being pushed to the answer vector.
            frq[level] = true; // After pushing, the value of this level in the
        }                     //  array is being set to true.
        // The left & right childs if they are (true) is/are pushed into the queue
        if (node->left) q.push({node->left, level + 1}); // having its/theirs
        if (node->right) q.push({node->right, level + 1});//level increased by 1
    }
    return v; // The answer vector is being returned.
}


int main(){
    BTnode *root = input_tree();
    cout << maxHeight(root) << endl;
    return 0;
}
