#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

//constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

};
 //traversing a dll
 void print (Node* head){
    Node* temp= head;

    while(temp!=NULL){
        cout<< "temp ke data ko print karo : "<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
 }
 //fun to get length
 int getLength( Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
 }

 insertAtHead(Node* head){
    Node* temp= head;

 }

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    cout<<"length of dll : "<<getLength(head)<<endl;
    insertAtHead(head, 12)
}