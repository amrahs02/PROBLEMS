#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter the elements for array"<<endl;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your i+2 matrix is "<<endl;
    for(i=2;i<n+2;i++){
        cout<<arr[(i)%n]<<" ";
    }
    return 0;
}