#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 //brute force
    int arr3[n];
    for(int i=0;i<n;i++){
            int count = 0;
        for(int j=i;j>=0;j--){
            if(arr[j]<=arr[i]){
                count++;
                arr3[i]= count;
            }
            else{
                arr3[i] = 1;
                break;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr3[i]<<" ";//reversed
    }
}
