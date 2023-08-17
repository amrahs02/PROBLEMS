#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n,sum=0;
    cout<<"Enter the no of elements of array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
         sum=sum+arr[i];
    }
     cout<<"The sum is "<<sum;
}