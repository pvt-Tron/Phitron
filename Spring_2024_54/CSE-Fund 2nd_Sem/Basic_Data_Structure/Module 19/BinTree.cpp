#include<bits/stdc++.h>
using namespace std;
class BinT{
    public:
        int val;
        BinT* prev;
        BinT* left;
        BinT* right;
        // BinT* nxtsd;

        BinT(int val){
            this->val = val;
            this->prev = NULL;
            this->right = NULL;
            this->left = NULL;
            // this->nxtsd = NULL;
        }
};
void inptBinT(BinT* &head, BinT* &tail, int v){
    BinT* newNode = new BinT(v);
    if(head == NULL){
        head == newNode;
        return;
    }
    BinT* tmp = head;
    while(tmp->left != NULL){
        if(tmp->right != NULL){
            
        }
    }

}
int main()
{
    BinT head = NULL;
    BinT tail = NULL;


    
    return 0;
}