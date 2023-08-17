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
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }


};
void InsertAtHead(Node* &head, int d){//insert at head4
    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
}

void InsertAtPosition(Node* &tail, Node* &head,int position, int d){
    //insert at head
    if(position==1){
        InsertAtHead(head,d);
        return ;
    }

    Node* temp= head;
    int cnt=1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }
 
    // creation of node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;





}



//at tail
void InsertAtTail(Node* &tail, int d){//insert at tail
    Node* temp = new Node(d);//d
    tail->next= temp;
    tail = temp;//tail->next;
}




    void deleteNode(int position, Node* &head){
        if(position == 1 ){
            Node* temp= head;
            head = head->next;
            //memory free
            temp->next= NULL;
            delete temp;
        }
        else{
            //delete middle or last
            Node* curr= head;
            Node* prev= NULL;
            int cnt=1;
            while(cnt <= position){
                prev=  curr;
                curr= curr->next;
                cnt++;
            }
            prev->next= curr->next;
            curr->next= NULL;
            delete curr;
        }
    }




//traverse
void print(Node* &head){
    Node* temp = head;//d
    
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
    Node* head = node1;//d
    Node* tail = node1;//d
    InsertAtHead(head, 12);//at head
    print(head);
    InsertAtTail(tail, 15);//at tail
    print(head);
    InsertAtPosition(tail, head, 4, 22);
    print(head);
    cout<<"head - :"<<head->data<<endl;
    cout<<"tail - :"<<tail->data<<endl;
    deleteNode(2,head);
    print(head);



      
}