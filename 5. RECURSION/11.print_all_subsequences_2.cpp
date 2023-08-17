#include<iostream>
#include<vector>

using namespace std;

    void Subseq(int arr[],int n,int i,vector<int> &v){
        if(i==n){
            for(auto it : v){
                cout<<it<<" ";
            }
            if(v.size()==0){
                cout<<"{ }";
            }
            cout<<endl;
            return  ;
        }
		Subseq(arr,n,i+1,v);
        v.push_back(arr[i]);
        Subseq(arr,n,i+1,v);
        v.pop_back();
    }

int main(){
    int arr[]={3,1,2};
    vector<int> v;
    Subseq(arr,3,0,v);

}