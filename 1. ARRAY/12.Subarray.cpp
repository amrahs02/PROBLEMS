#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,e,k,n,i,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            for(int k=s;k<=e;k++){
                // sum+=arr[k];
                cout<<arr[k]<<" ";
            }
            cout << endl;
   }
    cout << endl;
    }
    return 0;
}