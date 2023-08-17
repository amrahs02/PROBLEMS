#include<iostream>
using namespace std;
int main(){
    int n,i,count=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==res){
            count++;//wrong
        }
        else{
        cout<<"Count for"<<arr[i]<<" is "<<count<<endl;
            res=arr[i];
            count=1;
        }
    }
}