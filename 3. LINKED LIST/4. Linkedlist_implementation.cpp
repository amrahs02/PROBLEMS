#include<bits/stdc++.h>
using namespace std;


struct Node
{
    public:
    int data;
    Node *next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

void print(Node* temps){
    
}


int main(){
    Node* head = new Node (10);//Node *head = new Node(10)
    Node* temp1 = new Node (20);//head ->next=new Node(20)
    Node* temp2 = new Node (30);//head ->next->next = new Node(30)
    head->next =temp1;
    temp1->next =temp2;
    return 0;
}