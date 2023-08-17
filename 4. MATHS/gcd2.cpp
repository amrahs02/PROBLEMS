#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }   
    cout<<"output of a and b is same "<<endl;
        // cout<<a<<" "<<b<<" "<<endl;
        cout<<a<<endl;

}