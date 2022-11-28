#include<iostream>
#include<vector>

using namespace std;

    void Su(int arr[],int n,int i,vector<int> &v,int sum,int s){
        if(i==n){
            if(s==sum){
                for(auto it : v){
                cout<<it<<" ";
            }
            }
            if(v.size()==0){
                cout<<"{ }";
            }
            cout<<endl;
            return;
        }
        Su(arr,n,i+1,v,sum,s);
        v.push_back(arr[i]);
        sum+=arr[i];
        Su(arr,n,i+1,v,sum,s);
        sum-=arr[i];
        v.pop_back();
    }

int main(){
    int arr[]={2,1,3};
    vector<int> v;
    int sum=3;
    Su(arr,3,0,v,sum,0);

}