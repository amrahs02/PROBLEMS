#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,count=0;
    int arr[8]={8,4,6,3,7,2,1};
    int key=5,pos=3;
    int n=8;
    int index=pos-1;
    for(i=n-2;i>=index;i--)
            arr[i+1]=arr[i];
    arr[index]=key;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



//this answer is wrong in geeksforgeeks