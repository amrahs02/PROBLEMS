#include<iostream>
using namespace std;
int main (){
    int i,n,cnt=0,last;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    cout<<"There is :"<< cnt<<" digit in your number";
}