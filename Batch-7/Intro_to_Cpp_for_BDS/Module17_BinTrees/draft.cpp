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

int main()
{
    btNode* root = new btNode(10);
    
    return 0;
}