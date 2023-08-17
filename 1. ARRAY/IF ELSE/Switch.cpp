#include<iostream>
using namespace std;
int main (){
    char n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    switch (n){
        case '1':
        cout<<"One";
            break;
        default:
        cout<<"Not one";
            break;
    }
}