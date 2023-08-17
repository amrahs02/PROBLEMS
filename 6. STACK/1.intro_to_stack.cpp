#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.pop();
    cout<<"Printing top element : "<<s.top()<<endl;
    if(s.empty()){
        cou t<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of Stack is :"<<s.size()<<endl;
}