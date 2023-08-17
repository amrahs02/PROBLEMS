#include<iostream>
#include<vector>

using namespace std;

    void Subseq(int arr[],int n,int i,vector<int> &v,int sum,int s){
        if(i==n){
            if(s==sum){
                for(auto it : v){
                cout<<it<<" ";
            }
            }
            cout<<endl;
            return;
        }
        v.push_back(arr[i]);
        s+=arr[i];
        Subseq(arr,n,i+1,v,sum,s);
        s-=arr[i];
        v.pop_back();
        Subseq(arr,n,i+1,v,sum,s);
    }

int main(){
    int arr[]={2,1,3};
    vector<int> v;
    int sum=3;
    Subseq(arr,3,0,v,sum,0);

}