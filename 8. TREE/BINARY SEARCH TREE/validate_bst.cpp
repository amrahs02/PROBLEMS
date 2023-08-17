class Solution
{
    public:
    bool IsBST(Node* root, int max, int min){
        if(!root){
          return true;
        }
        if(root->data <= min || root->data >= max){
          return false;
        }
        return (IsBST(root->left, root->data, min) and IsBST(root->right, max, root->data));
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root){
        return IsBST(root,INT_MAX, INT_MIN);
    }

};




//method 2
class Solution
{
    public:

// Helper function to check if a binary tree is a BST
    bool isBSTHelper(Node* node, int* minVal, int* maxVal) {
        if (node == nullptr) {
            return true;
        }
    
        if (minVal != nullptr && node->data <= *minVal) {
            return false;
        }
    
        if (maxVal != nullptr && node->data >= *maxVal) {
            return false;
        }
    
        bool isLeftBST = isBSTHelper(node->left, minVal, &node->data);
        bool isRightBST = isBSTHelper(node->right, &node->data, maxVal);
    
        return isLeftBST && isRightBST;
    }

    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root){
        return isBSTHelper(root, nullptr, nullptr);
    }
};




//method 3
// sort and 