#include<iostream>
using namespace std;

int main (){
    int n,l,h,mid,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l=0;
    h=n-1;
    mid= l+(h-l)/2;
    while(l<=h){
        if(key==arr[mid]){
            cout<<"Found at index\":\""<<mid<<endl;
            break;
        }
        else if(key<arr[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"Not found"<<endl;
}