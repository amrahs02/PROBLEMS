#include<iostream>
using namespace std;
int main (){
    //Right Program
    int i,n;
    cout<<"Enter the number to check weather num is  or not"<<endl;
    cin>>n;
    for(i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"Non Prime "<<endl;
            break;
        }
        else {
            cout<<"Prime"<<endl;
            break;
        }
    }

}