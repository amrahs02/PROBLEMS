#include<iostream>
using namespace std;
int main(){
//     //wrong output on 3 and 9 
//     //Method1
//     int i,num;
//     cout<<"Enter number to check if prime"<<endl;
//     cin>>num;
//     for(i=2;i<num-1;i++){
//         if(num%i==0){
//             cout<<"Number is non Prime"<<endl;
//             break;
//         }
//         else {
//             cout<<"Number is Prime"<<endl;
//             break;
//         }
//     }
// }
    int i,num;
    cout<<"Enter number to check if prime"<<endl;
    cin>>num;
    for(i=2;i<=num-1;i++){
        if(num%i==0){
            if(i==num){
                cout<<"No. is Prime"<<endl;
            }
            else {
                cout<<"No. is Non Prime"<<endl;
            }
        }
    }
}
