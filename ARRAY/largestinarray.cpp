#include<iostream>
using namespace std;
int getlargest(int arr[],int n){
    int res= 0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res = i;
        return res; //right program
}
int main(){
    int arr[5]={4,6,3,67,9};
    int result = getlargest(arr,5);
    cout<<"index of result is " <<result<<endl;
    cout<<"And the value of array is "<<arr[result]<<endl;
}