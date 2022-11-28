#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        if((n&1)==1){// also use if(n%2!=0)  OR res= res +(n&1)
            count++;
            n=n>>1;// also use n=n/2  //because right shift means n/2^x (here x is 1)
        cout<<count<<endl;
        }
    }
}