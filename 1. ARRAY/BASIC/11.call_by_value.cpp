#include<bits/stdc++.h>
using namespace std;
int swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}
int main (){
    int x=10,y=15;
    swap(x,y);
    cout<<x<<" "<<y;
}