/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    int ans = -1,i=0;
    void solve(Node* root , int K){
        if(root==NULL){
            return ;
        }
        solve(root->right, K);
        i++;
        if(i==K){
            ans = root->data;
        }
        solve(root->left,K);
    }
    int kthLargest(Node *root, int K)
    {
        solve(root,K);
        return ans;
    }
};