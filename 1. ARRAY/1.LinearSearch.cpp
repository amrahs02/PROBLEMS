#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,count=0,flag=1;
    cin>>n;
    int arr[n],ans,key;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<"The index for the key is -:  "<<ans<<endl;

return 0;
}