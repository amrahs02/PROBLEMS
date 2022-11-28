#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    int sum;
    if (n==0){
        return  ;
    }
    fun(n-1);
    sum=sum+n;
}
int main(){
    int n,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    fun(n);
    cout<<sum<<endl;

}