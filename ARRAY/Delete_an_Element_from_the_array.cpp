#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,arr[8]={3,34,5,2,4,2,8,9};
    int key=5,n=8;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            break;
        }
    }
    if(i==n){
        cout<<n<<" "<<endl;
    }
    else{
        for(j=i;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        n=n-1;
        cout<< (n-1)<<" "<<endl;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}