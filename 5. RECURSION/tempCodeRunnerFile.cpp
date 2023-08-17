void fun(int i,int n){
    if(i>n){
        return ;
    }
    cout<<n<<endl;
    fun(i,n-1);
}