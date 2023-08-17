#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,n,last,deci=0,total=0;
    cout<<"Enter the binary no."<<endl;
    cin>>n;
    // for(i=1;n>0;i=i*2){
    //     last=n%10;
    //     deci=i*last;
    //     total=total+deci;
    //     n=n/10;
    // }
    //     cout<<total;                                //both are correct
    i=0;
    while(n>0){
        last=n%10;
        total=last*pow(2,i);
        deci+=total;
        n=n/10;
        i++;
    }
    cout<<deci<<endl;
}