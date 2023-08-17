#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i<n){
        return ;
    }
    fun(i-1,n);
    cout<<i<<endl;
}

int main(){
    int i=10,n=1;
    fun(i,n);
}
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// void fun(int n){
//     if(n==0){
//         return ;
//     }
// 		cout<<n<<endl;
//     fun(n-1);
// }

// int main(){
//     int n=10;
//     fun(n);
// }