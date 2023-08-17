#include<iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter the number to find divisors"<<endl;
    cin>>n;
        for(i=1;i<=n;i++){
            if(n%i==0){
                cout<<i<<endl;
            }
        }
    }