include<bits/stdc++.h>
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
}; // Blueprint of Binary Tree Node

/* A function has been created. Which will take a Binary
   Tree input and return the address of its Root Node. */
BTnode *inpt_tree(){  /* Sample inpt 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1 */
    int val; // 1. we take the value of Root Node as input ex.1st input val=10
    cin >> val;
    BTnode *root; // 'root' initialized
    // If Root is -1 the Root will be Null i.e. Binary Tree is empty
    if (val == -1) root = NULL;
    else root = new BTnode(val);// Otherwise that Node is Root Node
                        // >> 2a. we take a Node's Queue to do
    queue<BTnode *> q;    //  the rest of the process with its help.
    if(root) q.push(root); // 2b. we push the Root Node to the queue
    // else skip 'while loop' and return root = NULL at end of function
    while (!q.empty()){    // 3a. we will keep picking one Node at a time
        Node *p = q.front(); // 3b. we pick the Node that is at the beginning
        q.pop();    // 3c. picked front is poped
                // 4a. Since this Node needs to be connected to its Children,
        int l, r;   // its Children are being taken as input.
        cin >> l >> r; // 2nd input l = 20 r = 30 / 3rd input l = 40 r = -1
        Node *myLeft; // 4b. Two Node pointers have been created which will hold
        Node *myRight; //    the addresses of the childs of that picked Node.
           
        if (l == -1) myLeft = NULL; // 5a. If l is -1 that Node has no left child
        else myLeft = new Node(l);  // Otherwise left Node is created
                                // If r is -1, then that Node has no right child
        if (r == -1) myRight = NULL;
        else myRight = new Node(r); // Otherwise right Node is created

        p->left = myLeft; // 5b. Left child is connected to the left of the picked Node
        p->right = myRight; // Right child is connected to the left of the picked 

        // 6. Then those children are lined up. 
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root; // Finally, the Root Node is returned. 
}


/* If this function is given the Root Node of a Binary Tree,
   it returns the Maximum Height of that Binary Tree.     */  
int maxHeight(BTnode *root){//If the tree is empty, its Maximum Height will be 0
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left); /* The maximum height of the left subtree is
                being found using the maxHeight function In this case, the root
                of the left subtree is the left child of the current root Node */
   
    int r = maxHeight(root->right); /* The maximum height of the right subtree
     is being found using the maxHeight function In this case, the root of the
     right subtree is the right child of the current root Node */
   
    return max(l, r) + 1; // Then we will compare the max height between left
                          // and right and add 1 to it and return it.
}

//  code360/codeninjas

// phitron.io

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;         
    if (root->data == x)
        return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
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

int nodeLevel(BTnode<int> *root, int searchdV){ // find Level of a Given Node

    queue<pair<BTnode<int> *, int>> q; /* Aren't just stored the nodes, is also
    stored each node paired with its level. So we're taking a pair-type queue.*/
    if(root)q.push({root, 1}); /* Initially, the root node is being pushed into
    the queue and its level is given as 1. In this case, if two values are given
    with a comma between {}, it forms a pair. - If 'root' NULL while is skipped.*/

    while (!q.empty()){ // The loop continues until the queue is empty.
        // The first pair in the queue is being extracted.
        pair<BTnode<int> *, int> pr = q.front();
        BTnode<int> *node = pr.first;// The first element of the pair is the node.
        int level = pr.second;      // The second is the level.
        q.pop();                   // The queue is being popped.

    // Check if this node is the target node.
        if (node->val == searchdV) return level; // If so returns its level.
// If the node has a left child is saved in the queue increasing its level by 1
        if (node->left) q.push({node->left, level + 1});//from the current level.
// If the node has a right child is saved in the queue increasing its level by 1
        if (node->right) q.push({node->right, level + 1});//from the current level.
    }
}



int main(){

    BTnode root = inptBTree(); // Input Call

    level_order(root);
    cout << cntBTnode(root);

    cntLeafBTnode(root);
    cout << cntLeafBTnode(root);

    return 0;
}
