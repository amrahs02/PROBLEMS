#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr1[2][2],i,k,j;
    int arr2[2][2];
    int mul[2][2]={0};
    cout<<"Enter the elements of matrix 1"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin >>arr1[i][j];
        }
    }
    cout<<"Enter the elements of matrix 2"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin >>arr2[i][j];
        }
    }
    cout<<"Your 1st matrix is : = "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Your 2nd matrix is : = "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
            cout<<"Your matrix mul is : ="<<endl;
          for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
            mul[i][j]+=arr1[i][k]*arr2[k][j];
        }
         cout<<mul[i][j]<<" ";

        }
         cout<<endl;
    }

        return 0;
}