#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(i=0;i<n;i++){
        res=res^arr[i]; /// xor with itself even no of times give the zero
    }
    cout<<res<<endl;
}