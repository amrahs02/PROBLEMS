#include<bits/stdc++.h>
using namespace std;

struct Area
{
    int side,le,wd;

};
    void find_areas1(Area sq){
        cout<<sq.side<<endl;
        cout<<sq.le<<endl;
        cout<<sq.wd<<endl;
        sq.side=50;

}

    void find_areas2(Area *sq){
        cout<<sq->side<<endl;
        cout<<sq->le<<endl;
        cout<<sq->wd<<endl;
        sq->side=50;

}
int main(){
    Area sq ={25,40,60};
    find_areas2(&sq);
    cout<<endl;
    find_areas1(sq);
}