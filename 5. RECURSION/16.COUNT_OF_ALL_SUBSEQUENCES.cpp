#include<bits/stdc++.h>
#include<vector>

using namespace std;

    int Subseq(int arr[],int n,int i,int sum,int s){
        if(i==n){
            if(s==sum) return 1;
            else return 0;
        }
        s+=arr[i];
        int l = Subseq(arr,n,i+1,sum,s);
        s-=arr[i];
        int r = Subseq(arr,n,i+1,sum,s);
        return l+r;
    }

int main(){
    int arr[]={2,1,3};
    int sum=3;
    cout<<"Count is : "<<Subseq(arr,3,0,sum,0);

}