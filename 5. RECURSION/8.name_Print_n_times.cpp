#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n)
        return;
    cout<<"Sandeep"<<endl;
    fun(i,n-1);
}

int main (){
    int n,i=1;
    cin>>n;
    fun(i,n);
}