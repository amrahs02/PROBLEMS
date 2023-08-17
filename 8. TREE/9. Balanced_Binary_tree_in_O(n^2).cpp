/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    
    int height(Node * root){
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left,right) + 1;
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL){
            return true;
        }
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        
        int ans = abs(height(root->left)-height(root->right))<=1;
        if(left && right && ans){
            return true;
        }
        else{
            return false;
        }
    }
};