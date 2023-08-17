#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){//levelordertraversal is also called bfs (breadth first search) , we make level or.... using queue  
    queue <node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();  

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}  

int main(){
    node* root=NULL;


    //reating a tree
    root=buildTree(root);
    //1 3 7 -1 11 -1 -1 5 17 -1 -1 -1
    //levelorder
    cout<<"Printing the level order traversing"<<endl;
    levelOrderTraversal(root);

}

//correct








//leetcode limit exceed tle

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root){
//         vector<vector<int>> res;
//         queue<TreeNode *> q;
//         vector<int> level;
//         int size=q.size();

//         if(root==NULL){
//             return res;
//         }

//         q.push(root);

//         while(!q.empty()){
//             for(int i=0;i<size;i++){
//                 TreeNode *temp=q.front();
//                 q.pop();
//                 level.push_back(temp->val);
                
//                 if(temp->left){
//                     q.push(temp->left);
//                 }
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//             }
//             res.push_back(level);
//         }
//         return res;
//     }
// };



// queue<Node *> q;
//         vector<int> level;
//         int size=q.size();

//         if(node==NULL){
//             return level;
//         }

//         q.push(node);

//         while(!q.empty()){
//             for(int i=0;i<size;i++){
//                 Node *temp=q.front();
//                 q.pop();
//                 level.push_back(temp->data);
                
//                 if(temp->left){
//                     q.push(temp->left);
//                 }
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//             }
//         }
//         return level;