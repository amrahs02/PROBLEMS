#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,count=0,flag=1;
    cin>>n;
    int arr[n],ans,k;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            ans=i;
            break;
        }
    }
    cout<<"The index for the key is -:  "<<ans<<endl;

return 0;
}