#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter the no of elements in array"<<endl;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your matrix is :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    for(i=0;i<n;i++){
        arr[i]=(arr[i]-1);    
        }
    cout<<"Your decreamented matrix is "<<endl;
    for(i=0;i<n;i++){
             cout<<arr[i]<<" ";
        }
}