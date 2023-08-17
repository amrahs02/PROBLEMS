                                                 //   time o(n)//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[n-1];
    cout<<max<<endl;
    for(i=n-1;i>0;i--){
        if(arr[i-1]>max){
            cout<<arr[i-1]<<endl;
            max=arr[i-1];
        }
    }
}


                          //method 2   o(n2)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         bool flag = true;
//         for(j=i+1;j<n;j++){                //wrong
//             if(arr[j]<=arr[i]){
//                 flag= false;
//                 break;
//             }
//         }
//         if(flag==true){
//             cout<<arr[i]<<endl;
//         }
//     }
    
// }