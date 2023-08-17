#include<iostream>
using namespace std;
int main (){
    int i,n,fact=1;
    cout<<"Enter the number for factorial"<<endl;
    cin>>n;
    if(n==0){
        cout<<"Factorial is 1"<<endl;
    }
    else {
    for (i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact;
     }
}
