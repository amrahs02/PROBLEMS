#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }


};


        Node* insertIntoBst(Node* root,int data){ 
            if(root==NULL){
                root = new Node(data);
                return root;
            }
            if(data>root->data){
                root->right = insertIntoBst(root->right,data);
            }
            else{
                root->left = insertIntoBst(root->left,data);
            }
        }  



        void takeInput(Node* &root){
            int data;
            cin>>data;
            while(data!=-1){
                root = insertIntoBst(root,data);
                cin>>data;
            }
        }


int main(){
    Node * root = NULL;
    cout<<"enter data to create bst"<<endl;
    takeInput(root);
}