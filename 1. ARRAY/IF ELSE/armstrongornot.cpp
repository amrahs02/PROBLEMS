#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int i,sum=0,num,lsdgt;
    //wrong output
    
    cout<<"Enter the number"<<endl;
    cin>>num;
    int orgnln;
    orgnln=num;
    while(num>0){
        lsdgt=num%10;
        sum+=pow(lsdgt,3);
        num=num/10;
    }
    if(sum=orgnln){
        cout<<"No. is Armstrong"<<endl;
    }
    else{
        cout<<"No. is Not Armstrong"<<endl;
    }
}