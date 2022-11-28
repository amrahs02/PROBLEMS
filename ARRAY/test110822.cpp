#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[]={3,4,5,6,7,8,9};
    for(int i=2;i<=n;i++){
        arr[(n-i)+1]=arr[n-i];

    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}