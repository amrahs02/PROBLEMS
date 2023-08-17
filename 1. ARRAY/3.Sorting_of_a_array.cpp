#include<bits/stdc++.h>
using namespace std;
int main (){
    int n , i,min;
    cout<<"Enter the no of elememtns "<<endl;
    cin >>n;
    bool flag=1;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            flag=0;
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }else{
        cout<<"NO"<<"\n";

    }
}