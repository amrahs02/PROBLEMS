#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
    }
};
    void insertAtHead(Node* &head,int data){//&because do not want to create the copy of ll ,insted the ref of ll
        //new node create
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }    
    //funtion to traverse the ll
    void print(Node* &head){
        Node* res=head;//res is the node that i want to print 
        while(res!=NULL){
            cout<<res->data<<" ";
            res=res->next;
        }
        cout<<endl;
    }
int main(){
    //create a new node
    Node* node1 =new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head pointed to node1
    Node* head =node1;
    Node* tail =node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);


}