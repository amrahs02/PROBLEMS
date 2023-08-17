#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int res= 0;
    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl<<" ";
}