#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n,max;
    cout<<"Enter the no of elements in array"<<endl;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];//This program can only cann find greatest element
        for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>max){
            
        }
    }
    cout<<"Greater ELEMENT is "<<max;
    return 0;
    }