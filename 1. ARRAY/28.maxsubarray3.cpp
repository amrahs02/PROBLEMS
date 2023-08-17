#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,sum=0,maxm=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto x:arr){
        sum+=arr[i];//wrong
        maxm =max(maxm,sum);
        sum=0;
    }
    return 0;
}