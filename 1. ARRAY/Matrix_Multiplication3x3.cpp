#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3]={0};
    cout<<"Enter the elements for arr1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin >> arr1[i][j];
    }
    }
     cout<<"Enter the elements for arr2"<<endl;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin >> arr2[i][j];
    }
    }
    cout<<"YOur 1st matrix is "<<endl;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
    }
     cout<<"YOur 2st matrix is "<<endl;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"Your matrix multplication is "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
             cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}