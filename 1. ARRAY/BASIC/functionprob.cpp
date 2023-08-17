#include<iostream>
using namespace std;
void fun(int x,int y,int z);
 void fun(int x,int y,int z){
        cout<<x<<" "<<y<<" "<<z<<endl;
        // In this type of problem (exp in place of values or variables)
        //Order is not defined
 }
int main (){
    int i=2;
    fun(++i,++i,++i);
    return 0;
}