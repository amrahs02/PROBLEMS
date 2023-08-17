#include<bits/stdc++.h>
using namespace std;
struct Pointer{
    int x ;
    int y;
};
int main(){
    Pointer p = {13 ,23};
    Pointer *ptr = &p;
    cout << ptr->x<<" ";
    ptr-> x= 30;
    cout<<p.x;
    return 0;

}