#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int arr[6]={2,3,5,6,4,3};
    int j;
    for(int i=0;i<6;i++){
        if(arr[i]==6)
            break;
    }//bug
    for(int n=i ; n<5 ; n++){
        arr[n]=arr[n+1];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}