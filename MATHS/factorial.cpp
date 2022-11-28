#include<bits/stdc++.h>
using namespace std;
int main(){
    int fact=1,n,i;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
    }
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
    }
    cout<<fact;
}