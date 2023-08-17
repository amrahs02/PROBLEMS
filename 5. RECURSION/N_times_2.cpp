#include<iostream>
using namespace std;
void fun1(int n){
    if(n==0)//base cases
        return ;
    cout<<"SANDEEP"<<endl;
    fun1(n-1);
}
int main(){
    int n;
    cin>>n;
    fun1(n);
}
