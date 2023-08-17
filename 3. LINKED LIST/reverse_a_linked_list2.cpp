// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// /****************************************************************

//     Following is the class structure of the LinkedListNode class:

//     template <typename T>
//     class LinkedListNode
//     {
//     public:
//         T data;
//         LinkedListNode<T> *next;
//         LinkedListNode(T data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     // Write your code here// O(n)
//     if(head==NULL|| head->next==NULL){
//         return head;
//     }
//     Node* prev=NULL;
//     Node* curr= head;
//     Node* forward = NULL;
    
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev= curr;
//         curr=forward;
//     }
//     return prev;
// }




