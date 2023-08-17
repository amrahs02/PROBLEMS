#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int arr[5]={3,53,5,2,765};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//method 2
//int this method we use range based for loop
// int i;
// int arr[5] = { 3,53,52,43,22};
// for(int x:arr)
// cout<<x<<" ";
// return 0 ; 
//     }