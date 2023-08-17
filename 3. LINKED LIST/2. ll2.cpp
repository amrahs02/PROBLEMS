#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(Node* &head, int d){//insert at head4
    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
}

//traverse
void print(Node* &head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    //created new node
    Node* node1 = new Node(10);
    // cout<<node1->data <<endl;
    // cout<<node1->next <<endl;

    //head pointerd to node1
    Node* head = node1;
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 15);
    print(head);
    InsertAtHead(head, 16);
    print(head);
    InsertAtHead(head, 16);
    print(head);
    InsertAtHead(head, 17);

}