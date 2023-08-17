

// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data<x){
        search(root->right,x);
    }
    else{
        search(root->left,x);
    }
}


//method 2


// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    // if(root==NULL){
    //     return false;
    // }
    // if(root->data==x){
    //     return true;
    // }
    // if(root->data<x){
    //     search(root->right,x);
    // }
    // else{
    //     search(root->left,x);
    // }
    
    //iterative
    Node *temp = root;
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp= temp->right;
        }
    }
    return false;
}