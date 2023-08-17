#include<bits/stdc++.h>
using namespace std;
struct Complex
{
    int real,img;
    };

int main (){
    Complex p1,p2,p3;
    cin>>p1.real>>p1.img;
    cin>>p2.real>>p2.img;
    p3.real= p1.real+p2.real;
    p3.img=p1.img+p2.img;
    cout<<p3.real<<" + "<<p3.img<<"i ";

}