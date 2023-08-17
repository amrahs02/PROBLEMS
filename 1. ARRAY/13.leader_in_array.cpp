                                    //easy 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,last=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"leader is "<<arr[n-1]<<endl;
    last=arr[n-1];
    for(i=n-1;i>0;i--){
        if(arr[i-1]>last){
            cout<<"leader is "<<arr[i-1]<<endl;
            last=arr[i-1];
        }
    }
}