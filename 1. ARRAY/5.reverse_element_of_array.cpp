#include<bits/stdc++.h>
using namespace std;
int main(){
    int start=0,n,end;
    int arr[5]={2,3,4,5,6};
    end=4;
    int temp=0;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++; end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";
    }
}