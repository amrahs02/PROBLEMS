// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={8,5,0,10,39,0,30,0};
//     int i,n=8,p;
//     p=n;//p is the new no of size of array that can be change when we find zero
//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             swap(arr[n-1],arr[i]);
//             p--;
//         }//wrong
//     }
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }






                    //gfg method 1



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[16]={3,4,6,0,2,9,0,3,4,0,3,0,4,6,3,5};
//     int i,n=16,j;
//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             for(j=i+1;j<n;j++){
//                 if(arr[j]!=0){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
    
// }


            ///method 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,count=0;
    cin>>n;
    int arr[n];
    //input array
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} cvvcsss
