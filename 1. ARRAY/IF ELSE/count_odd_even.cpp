#include <bits/stdc++.h>
using namespace std;
int main (){
    int i,n,even=0,odd=0;
    cout<<"Enter the array elements "<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"Even : = "<<even<<endl;
    cout<<"Odd : = "<<odd<<endl;

}