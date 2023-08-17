#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    fun(i+1,n);
}

int main(){
    int i=1,n=10;
    fun(i,n);
}