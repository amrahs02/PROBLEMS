struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};//wrong
int main(){
    Node * head = new Node (10);//Node *head = new Node(10)
    Node *temp1 = new Node (20);//head ->next=new Node(20)
    Node *temp2 = new Node (30);//head ->next->next = new Node(30)
    head ->next =temp1;
    temp1 ->next =temp2;
    return 0;
}