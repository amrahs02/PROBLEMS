#include<iostream>
using namespace std;
int main (){
    //wrong program
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=5-i){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
     //   cout<<endl;
    }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    
    return 0;
}