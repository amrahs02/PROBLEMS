#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n){
        return ;
    }  
    fun(i+1,n);
    cout<<i<<endl;
}

int main(){
    int i=1,n=10;
    fun(i,n);
}