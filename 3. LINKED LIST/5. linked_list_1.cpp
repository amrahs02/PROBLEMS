#include<iostream>


      class Node {
        public:
        int data ;
        Node* next;

        //constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        void insertAtHead(Node* &head , int data){
            Node* temp= new Node(data);
            temp -> next = head ;
            head = temp;
        }
   };
   





using namespace std;
int main(){
    //linked list
    //collection of nodes
    //linear data structure 
    //grow and shrink at runtime
    /*
    insertion
    deletion is easy

    //implementation
    
    
    
    */
   

    Node* node1= new Node(20);
    cout<<node1->data<<endl;
    cout<<node1->data<<endl; 




}