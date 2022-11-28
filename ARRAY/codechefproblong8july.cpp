#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int move1,move2,move3,move4,n=100,temp=0,i;
        cin>>move1>>move2>>move3>>move4;
        for(int i=1;i<=n;i++){
            move1+=1;
            move2+=2;
            temp=0;
            if(move1==move3&&move2==move4){
                temp=1;
                break;
            }
        }
         if(i==100){
             cout<<"YES"<<endl;
            }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
