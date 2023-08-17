#include<iostream>
using namespace std;
int main(){
    int n,i,j,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];// wrong
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[j]=arr[i]){
                count++;
            }
        }
        if(count%2!=0)///wrong program
            cout<<arr[i]<<" ";
            break;
}
}