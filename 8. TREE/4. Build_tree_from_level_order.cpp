
void* buildFromLevelOrder(node* &root){
    queue<node* > q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        cout<<"enter left node for" <<root->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp ->left = new node (leftData);
            q.push(temp->left);
        }
    }
}