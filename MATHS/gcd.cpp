#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int min=a<b?a:b;
    while(min>0){
    if(a % min==0 && b % min==0){
        break;
    }
        min--;
}
    cout<<min;

}