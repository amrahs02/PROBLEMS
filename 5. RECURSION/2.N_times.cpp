#include<iostream>
using namespace std;
void fun1(int n){
    if(n==0)//base cases
        return ;
    cout<<"SANDEEP"<<endl;
    fun1(n-1);
}
int main(){
    int n;
    cin>>n;
    fun1(n);
}



/* typicas structure
fun(){
    base cases


    recursive cases(with at  least one change in parametr eg....(fun(n-1)))
}



application of recursion
1.anything which can be programmed using recursioin also can be using iteration
  based on recursion
    1.DP
    2.Backtracking 
    3.Divide and conquier (binary search , quick sort, merge sort)
2. 
many prablem inherentylly recursiove in 
    1.tower of hanoi
    2.dfs based on traversal of true
    3.
    */