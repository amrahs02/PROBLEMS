// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10]={4,1,9,2,3,6};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[j]<arr[i])
//                 swap(arr[i],arr[j]);
//         }
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//}     }
//correct


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={4,1,9,2,3,6};
    int n=6;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){//correct
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}