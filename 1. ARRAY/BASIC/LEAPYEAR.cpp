#include<iostream>
using namespace std;
int main (){
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if((year%4==0)||(year%100==0)){
        cout<<"Year is Leap Year"<<endl;
    }
    else {
        cout<<"Not a Leap Year";
    }
}