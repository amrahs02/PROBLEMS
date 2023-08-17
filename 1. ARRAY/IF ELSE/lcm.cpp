#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i; 
    int l=n<m?n:m;
    for(i=l;i<n*m;i++){
        if(i%n==0 && i%m==0)
           break;
    }
    cout<<i;
}