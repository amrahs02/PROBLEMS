#include<iostream>
using namespace std;
class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;
public:
    //Initialize Two Stack
    TwoStack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int [s];
    }
    //push in stack 1
    void push1(int num){
        if(top1-top2>0){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack overflow";
        }
    }
    //push in stack 2
    void push2(int num){
         if(top2-top1>0){
            top2++;
            arr[top2]=num;
        }
        else{
            cout<<"Stack overflow";
        }
    }
    //pop from stack
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
    }
    //pop from stack
    int pop2(){
                if(top2<size){
            int ans=arr[top2];
            top1++;
            return ans;
        }
    }
};