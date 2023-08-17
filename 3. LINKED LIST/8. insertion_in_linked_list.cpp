#include<bits/stdc++.h>
using namespace std;
 class node{
        int data;
        node* next;
        node(int val){//CONSTRUCTOR
            data=val;
            next=NULL
        }
    };
    void insetAtTail(node* &head , int val){
        node* n=  new node(val);
        if (head == NULL){
            head=n;
            return;
        }
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
        void display (node* head){
            node* temp=head;
            while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
            }
            cout<<endl;

        }
int main (){
    
    //problems in array 
    //1.insertion or deletion in array is costly
    //2.array stores contiguous memory location
    //3.fixed size
    
}