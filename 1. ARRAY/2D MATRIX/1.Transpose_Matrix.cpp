#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[3][3],i,j;
    cout<<"Enter the element for matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"your matrix:="<<endl;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Its Transpose is :="<<endl;
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
        cout<<arr[j][i]<<" ";
        }
        cout<<endl;
     }
     return 0;
}