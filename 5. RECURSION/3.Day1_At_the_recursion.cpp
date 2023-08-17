#include<bits/stdc++.h>
using namespace std;

int recursion(int num){
    if(num==1){
        return 1;
    }
    else{
        return num*recursion(num-1);
    }
}

int main(){
    int n;
    cin>>n;
    int x=recursion(n);
    cout<<x<<endl;

}