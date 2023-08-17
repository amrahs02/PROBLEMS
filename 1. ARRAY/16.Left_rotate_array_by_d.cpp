                                method 1   easy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,d;
    cin>>n>>d;
    int arr[n],temp[n];
    for(i=0;i<n;i++){//input
        cin>>arr[i];
    }
    for(i=0;i<d;i++){ //from 0 to d
        temp[i]= arr[i];
    }
    for(i=1;i<n;i++){  //from d to n-d
        arr[i-d]=arr[i];
    }
    for(i=0;i<d;i++){  //from n-d to n
    arr[(n-d)+i]=temp[i];
    }
    for(i=0;i<n;i++){//output
        cout<<arr[i]<<endl;
    }
}

                                                //    method 2 gfg  
            // void leftrotateone(int arr[],int n){
            //     int temp= arr[0];
            //     for(int t=1;i<n;i++){
            //         arr[i-1]=arr[i];
            //     }
            //     arr[n-1] = temp;
            // }
            // void leftrotate (int arr[],int n, int d)
            // {
            //     for(int i=0;i<n;i++){
            //         leftrotate(arr,n);
            //     }
            // }
            // int main()

//                                                             method 3 gfg  efficient take less time
// void leftRotate(int arr[], int n , int d){
//     reverse (arr, 0,d-1);
//     reverse (arr, d,n-1);
//     reverse (arr, 0,n-1);
// }                        
// void reverse (int arr[], int low, int high){
//     while(low<high){
//         swap(arr[low],arr[high])
//         low++;
//         high--;
//     }
// }                                