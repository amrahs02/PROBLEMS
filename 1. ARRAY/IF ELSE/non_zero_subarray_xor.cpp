#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%2==0){
        res+=1;
        cout<<res<<" ";
        }
        else{
            res+=2;
            cout<<res<<" ";
        }
    }
    cout<<endl;
        
    }
    
    return 0;
}
