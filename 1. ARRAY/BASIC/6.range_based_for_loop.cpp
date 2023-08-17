#include<bits/stdc++.h>
using namespace std;
//call by value
int main(){
    int arr[]={10,20,30,40};
    for(int x : arr)
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";
        return 0;
}
//call by reference 
int main(){
    int arr[]={10,20,30,40};
    for(int x : arr)
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";
        return 0;
}