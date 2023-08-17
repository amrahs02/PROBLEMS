#include<iostream>
using namespace std;
int main (){
    int i,j;
    char k='A';
    for (i=0;i<=4;i++){
        for (j=0;j<=8;j++){
            if (j<=5-i||j>=3+i){
                cout<<k;
            }
            else {
                cout<<" ";
            }
            
        }cout<<endl;
    }
}