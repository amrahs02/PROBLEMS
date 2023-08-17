#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j,n,m;
    cout<<"Enter the size of array X x X "<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    // for(i=0;i<n;i++){
    //     for(i=0;i<m;i++){

    //     }
    // }
    return 0;
}