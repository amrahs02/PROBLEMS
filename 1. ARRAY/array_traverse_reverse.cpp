#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,i;
    cout<<"Enter the no of elements in an array "<<endl;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout<<"your array is "<<endl;
        for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Its reverse is "<<endl;
        for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}