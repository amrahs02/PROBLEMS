#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n){
        return ;
    }
    cout<<n<<endl;
    fun(i,n-1);
}

int main(){
    int i=1,n=10;
    fun(i,n);
}