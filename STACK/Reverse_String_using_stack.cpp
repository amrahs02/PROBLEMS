#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Sandeep";
    stack<char> sta;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        sta.push(ch);
    }
    string ans= "";
    for(int i=0;i<str.length();i++){
        if(sta.empty()==false){
            char ch=sta.top();
            ans.push_back(ch);
            sta.pop();
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<ans[i];
    }
}