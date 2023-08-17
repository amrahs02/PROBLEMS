// #include<bits/stdc++.h>
// using namespace std;
// //print sum i times
// // int  para(int i,int sum){
// //     if(i<1){
// //         cout<<sum<<endl;
// //         return 0;
// //     }
// //     para(i-1,sum+i);
// // }
// //functional
// //if we do not use thé parameter
// // f(n)+f(n-1)+f(n-2)+f(n-3)

// // int main(){
// //     para(3,0);
    
// // }
//correct

// int fun(int n){
//     if(n==0){
//         return 0;
//     }

//     return (n+fun(n-1));
// }
// int main(){
//     cout<<fun(3);
// }


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fun(int i,int sum){
    if(i<1){
			cout<<sum<<endl;
        return ;
    }
    fun(i-1, sum+i);
}

int main(){
    int sum,n=10;
    fun(n,0);
}

