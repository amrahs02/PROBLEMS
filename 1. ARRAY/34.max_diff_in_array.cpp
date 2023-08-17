#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,max1,max2;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        max1=arr[i+1]-arr[i];
        for(j=i+1;j<n;j++){
            max2=arr[j+1]-arr[i];
            if(max1>max2){
                max1=max2;
            }
        }
    }
    cout<<max1<<" "<<max2;
}