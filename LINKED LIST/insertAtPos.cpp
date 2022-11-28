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

    void insertAtTail(Node* &tail,int data){
        Node* temp = new Node (data);
        tail->next=temp;
        tail=temp;
    }
    void insertAtHead(Node* &head,int data){//&because do not want to create the copy of ll ,insted the ref of ll
        //new node create
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }    
    void insertAtPosition(Node* &tail ,Node* &head,int position,int data){
        // if(position==1){
        //     insertAtHead(head,d);//if we want to insert at 1 position
        //       return ;
        // }
        Node* temp= head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        // if(temp->next==NULL){//if we want to insert at last position
        //     insertAtTail(tail,data);
        //     return;
        // }
        //creating a new node for d
        Node* nodeToInsert= new Node(data);
        nodeToInsert->next=temp->next;
        temp->next= nodeToInsert;
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
    insertAtPosition(tail, head,2,22);
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,15);
    print(tail);


}