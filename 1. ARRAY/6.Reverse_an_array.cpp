#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int i,n;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int start=0,end=n-1,temp=0;
        while(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        // for(int i=0;i<n;i++){
        //     swap(arr[i],arr[n-1]);
        //     n--;
        // }
        for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
	//code
	return 0;
}