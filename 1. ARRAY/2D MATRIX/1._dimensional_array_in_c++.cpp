#include<bits/stdc++.h>
using namespace std;
int main (){
    // int arr[6][6]={{2,25,2,52,3,4},{24,432,345,2,54,4}};
    // cout<<arr[1][2];
    int m=3,n=2;
    int arr[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j]=i+j;
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             cout<<arr[i][j]<<" ";
        }
        }
}
