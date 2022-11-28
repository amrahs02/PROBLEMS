#include<bits/stdc++.h>
using namespace std;

//correct
int  UniqueArr(int arr[],int size){//best appraoch
    int xort=0;
    for(int i=0;i<size;i++){
         xort=xort^arr[i];
    }
    return xort;
}

//wrong
// int UniqueArr(int arr[], int n){
//     int res=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;i++){
//             if(arr[i]!=arr[j]){
//                 res=arr[i];
//             }
//         }
//     }
//     return res;
// }

//approach = count all the no of times a no. occurs.

int main(){
    int res=0;
    int even[7]={4,5,6,5,9,4,6};
    cout<<UniqueArr(even,7)<<endl;
    // printArr(even,7);

}