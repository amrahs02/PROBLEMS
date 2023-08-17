#include<iostream>
using namespace std;
int main(){
    int reverse=0,num,lastdigit;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(num>0){
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num=num/10;
    }
    cout<<"The reverse is "<<reverse;
}