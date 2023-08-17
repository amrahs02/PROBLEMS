#include<bits/stdc++.h>
#include<vector>

using namespace std;

    int Subseq(int arr[],int n,int i,vector<int> &v,int sum,int s){
        if(i==n){
            if(s==sum){
                for(auto it : v){
                cout<<it<<" ";
                return true;
            }
            }
            else{
                return false;
            }
        }
        v.push_back(arr[i]);
        s+=arr[i];
        if(Subseq(arr,n,i+1,v,sum,s)==true){
            return true;
        }
        s-=arr[i];
        v.pop_back();
        if(Subseq(arr,n,i+1,v,sum,s)==true){
            return true;
        }
        return false;
    }

int main(){
    int arr[]={2,1,3};
    vector<int> v;
    int sum=3;
    Subseq(arr,3,0,v,sum,0);

}