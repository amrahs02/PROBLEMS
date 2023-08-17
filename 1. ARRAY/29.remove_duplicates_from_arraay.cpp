#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] ={10,20,20,30,30,30};
    int n=6,i,j,size=6,k;
    for(i=0;i<6;i++){
        for(j=i;j<6;j++){
            if(arr[i]==arr[j]){
                for(k=i;k<6;k++){
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}