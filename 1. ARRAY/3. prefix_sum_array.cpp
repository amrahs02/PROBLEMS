#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],prefix[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(i==0){
            prefix[i]=arr[i];
        }
        else{
            prefix[i]=prefix[i-1]+arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    return 0;
}