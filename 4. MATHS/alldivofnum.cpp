#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//             if(i!=n/i){
//                 cout<<n/i<<endl;
//             }
//         }
//     }
// }