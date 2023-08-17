#include<iostream>
using namespace std;
int main (){
    int n,fact(int); 
    cout<<"Enter the value for factorial"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<"The factorial is " <<ans<<endl;
    return 0;
}
    int fact(int n){
        int facto=1;
        for(int i=1;i<=n;i++){
            facto=facto*i;
        }
        return facto;
    }