#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={4,1,9,2,3,6};
    for(int i=1;i<6;i++){
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[j]&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}

//Both are correct
//without j variable
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10]={4,1,9,2,3,6};
//     for(int i=1;i<6;i++){
//         int temp=arr[i];
//         while(temp<arr[i-1]&&(i-1)>=0){
//             arr[i]=arr[i-1];
//             i--;
//         }
//         arr[i]=temp;
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }
// }