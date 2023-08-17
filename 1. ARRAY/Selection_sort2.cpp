#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //input
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;//wrong program
    }
    //operation
    // 1 3 4 2 5
    for(i=0;i<n;i++){
        int min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                swap(arr[min_index], arr[j]);
            }
        }
    }
    //output
    cout<<"Your sorted array is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}