#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[5]={3,53,63,643,24};
    for(int &x: arr){
        x=x*2;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
}