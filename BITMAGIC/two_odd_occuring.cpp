#include<iostream>
using namespace std;
int main(){
    int n,i,res1=0,res2=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<endl<<res2;
}