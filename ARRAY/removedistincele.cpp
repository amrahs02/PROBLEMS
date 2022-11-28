#include<iostream>
using namespace std;
int main(){
    int arr[7]={10,20,20,30,30,30,30},i, arr2[7],res=1;
    arr2[0]=arr[0];
    for(int i=1;i<7;i++){
        if(arr[res-1]!=arr[i]){ 
            arr2[res]=arr[i];
            res++;
        }
      }
        for(int i=0;i<res;i++){//doubt in res-1
            arr[i]=arr2[i];
    }
         for(int i=0;i<res-1;i++){
             cout<<arr[i]<<endl;
    }
}