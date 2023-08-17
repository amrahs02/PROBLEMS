#include<bits/stdc++.h>
using namespace std;
class Queue{
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue(){
        size =10000;
        arr=new int [size];
        qfront =0;
        rear=0;
    }  
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
    void Enqueue(int data){
        if (rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }

    }
    int dequeue (){
        if (qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;//why this -1
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }

    }
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }

    }

};