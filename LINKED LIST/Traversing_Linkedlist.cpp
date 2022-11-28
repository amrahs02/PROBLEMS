struct Node
{
    int data;
    Node *next;
    Node(int n){
        int x;
        data=x;
        next=NULL;
    }
};
//wrong
void printList(Node *head){
    Node *curr = head;
    if(curr!=nullptr){
        return (curr->data);
        curr=curr->next;
    }
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    return 0;

}