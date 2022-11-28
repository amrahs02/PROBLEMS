//number of distinct element in this array

#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,20,20,30,30,30};
    int res=1,i;
    for(i=1;i<6;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    cout<<res<<endl;
}