#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int flag=1;
    cin>>n;
    if (n==1){
        cout<<"Neither Prime Nor Composite";
    }
         for(int i=2;i*i<n;i++){
            if(n%i==0){
             flag=0;
             break; 
            }
            else{
                flag=1;
            }
        }
        if(flag==0){
            cout<<"Non Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
}