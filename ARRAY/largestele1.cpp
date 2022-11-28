#include<iostream>
using namespace std;
int main(){
    int n,i,j,max;
    cin>>n;
    int arr[n];
    //some outputs is wrong
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[j]>arr[i]){
                max=arr[j];
            }
        }
    }
    cout<<max<<endl;
}