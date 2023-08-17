/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    void inorder(Node* root,vector<int>&v){
    if(!root)
        return;
        
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

 

    int findMax(Node *root){
        vector<int>v;
        inorder(root,v);
        int siz=v.size();
        sort(v.begin(),v.end());
        return v[siz-1];
    }

    int findMin(Node *root){
        //code here
        vector<int>v;
        inorder(root,v);
        int siz=v.size()-1;
        sort(v.begin(),v.end());
        return v[0];

    }
};