#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void swapArr(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={4,5,6,7,8,6,4,9};
    swapArr(even,8);
    printArr(even,8);

}