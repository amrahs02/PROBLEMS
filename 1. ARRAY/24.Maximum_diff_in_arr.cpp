#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){//j is always greater than i
            if(arr[j]-arr[i]>max){
                max=arr[j]-arr[i];// max(max,arr[j]-arr[i]);
            }
        }
    }
    cout<<max<<endl;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j,n;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int res=arr[1]-arr[0];     //wrong
//     int minVal=arr[0];
//     for(i=0;i<n;i++){
//         res=max(res, arr[j]-minVal);
//         minVal= min(minVal,arr[j]);
//     }
//     cout<<res<<endl;
// }