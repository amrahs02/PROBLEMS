#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,i,*temp;
    // cin>>n;
    // int arr[n];
    // //taking input
    // for(i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // //wrong
    // //swapping alternate element
    // for(i=0;i<n;i++){
    //         &temp = *arr[i];
    //         &arr[i]=*arr[i+1];
    //         &arr[i+1]=*temp;
    // }
    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    int n,i,temp=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}