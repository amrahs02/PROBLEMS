// #include<iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     if(n&(1<<(k-1))){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }
              //method 2

#include<iostream>
using namespace std;
int main(){
    int number,k;
    cin>>number>>k;
    if((number>>(k-1)&1)==1){
        cout<<"Yes"<<endl;
    }//wrong
    else{
        cout<<"NO"<<endl;
    }
}
