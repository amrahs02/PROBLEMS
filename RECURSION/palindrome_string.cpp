#include<bits/stdc++.h>
using namespace std;

int fun(int i,string &str){
    if(i>=str.size()/2) return true;
        if(str[i]!=str[str.size()-i-1]) return false;
    fun(i+1,str);//or return fun(i+1,str);
}

int main(){
    string str = "MADAM";
    int n=str.size();
    cout<<fun(0,str);
}